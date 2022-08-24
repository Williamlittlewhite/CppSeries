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
	String(String&& other) noexcept//�ƶ�����,move���캯������Ϊû�����ж��󣬹���һ���¶�����Ҫ����ռ�
	{
			printf("Moved!\n");
			m_size = other.m_size;
			m_Data = other.m_Data;
			other.m_size = 0;
			other.m_Data = nullptr;
		
	}

	String& operator=(String&& other) noexcept
	{
		if (this != &other)  //ֻ�ڸ�ֵ = ���˶�����ͬһ����ʱ������ƶ���ֵ
		{
			printf("Moved!\n");
			delete[] m_Data;//�ƶ���ֵҪȷ�����ж�������ڵĿռ䱻����������ڴ�й¶
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
		delete m_Data; //delete[]�Ƕ�������ÿ�����������ͷ��ڴ棬���ַ������������һƬ�ڴ�delete�Ϳ�
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
	//std::move��һ���Ѿ����ڵı��������ʱ��������ֵ������ȡ������Դ
	//String string = "Hello";
	//String dest = (String&&)string; //��һ����ֵ���캯������һ���µ��ַ�����ͬ����������
	////String dest((String&&)string);//���캯����ʽ
	//String dest = std::move(string);//���캯����ʽ��ʵ���ϻ�ʹ���ƶ����캯���������Ҫ�ƶ���ֵ
	////��ֵ������ֻ�����ǰ�һ��������ֵ��һ�����еı����Żᱻ������dest = std::move(string);
	std::cin.get();
}