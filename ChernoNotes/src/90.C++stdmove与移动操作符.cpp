#include<iostream>

class String
{
public:
	String() = default;
	String(const char* string) {
		printf("Created!\n");
		m_size = strlen(string);
		m_Data = new char[m_size];
		memcpy(m_Data, string, m_size);
	}
	String(const String& other) {
		printf("Copied!\n");
		m_size = other.m_size;
		m_Data = new char[m_size];
		memcpy(m_Data, other.m_Data, m_size);
	}
	String(String&& other) noexcept//移动语义,move构造函数，因为没有已有对象，构造一个新对象不需要清除空间
	{
			printf("Moved!\n");
			m_size = other.m_size;
			m_Data = other.m_Data;
			other.m_size = 0;
			other.m_Data = nullptr;
		
	}

	String& operator=(String&& other) noexcept
	{
		if (this != &other)  //只在赋值 = 两端对象不是同一对象时候调用移动赋值
		{
			printf("Moved!\n");
			delete[] m_Data;//移动赋值要确保已有对象的现在的空间被清除，否则内存泄露
			m_size = other.m_size;
			m_Data = other.m_Data;
			other.m_size = 0;
			other.m_Data = nullptr;
		}
		return *this;
	}

	~String()
	{
		printf("Destroyed!\n");
		delete m_Data; //delete[]是对数组中每个对象析构释放内存，而字符串数组仅仅是一片内存delete就可
	}
	void Print()
	{
		for (uint32_t i = 0; i < m_size; i++)
			printf("%c", m_Data[i]);
		printf("\n");
	}
private:
	char* m_Data;
	uint32_t m_size;

};
class Entity
{
public:
	Entity(const String& name) :m_Name(name)
	{

	}
	//Entity(String&& name):m_Name((String&&)name){}
	Entity(String&& name) :m_Name(std::move(name)) {}

	void PrintName()
	{
		m_Name.Print();
	}
private:
	String m_Name;
};

int main()
{
	//Entity entity(String("Cherno"));
	//entity.PrintName();

	String apple = "Apple";
	String dest;

	std::cout << "Apple: ";
	apple.Print();
	std::cout << "Dest: ";
	dest.Print();
	dest = std::move(apple);
	std::cout << "Apple: ";
	apple.Print();
	std::cout << "Dest: ";
	dest.Print();
	//std::move把一个已经存在的变量变成临时变量（右值），窃取其中资源
	//String string = "Hello";
	//String dest = (String&&)string; //用一个右值构造函数构造一个新的字符串等同于下面这行
	////String dest((String&&)string);//构造函数方式
	//String dest = std::move(string);//构造函数方式，实际上会使用移动构造函数，因此需要移动赋值
	////赋值操作符只有我们把一个变量赋值给一个已有的变量才会被调用如dest = std::move(string);
	std::cin.get();
}