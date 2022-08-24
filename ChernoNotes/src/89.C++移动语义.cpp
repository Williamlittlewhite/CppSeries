//#include<iostream>
//
//class String
//{
//public:
//	String() = default;
//	String(const char* string) {
//		printf("Created!\n");
//		m_size = strlen(string);
//		m_Data = new char[m_size ];
//		memcpy(m_Data, string, m_size); 
//	}
//	String(const String& other) {
//		printf("Copied!\n");
//		m_size = other.m_size;
//		m_Data = new char[m_size];
//		memcpy(m_Data, other.m_Data, m_size);
//	}
//	String(String&& other) noexcept//�ƶ�����,move���캯��
//	{
//		printf("Moved!\n");
//		m_size = other.m_size;
//		m_Data = other.m_Data;
//		other.m_size = 0;
//		other.m_Data = nullptr;
//	}
//	~String()
//	{
//		printf("Destroyed!\n");
//		delete m_Data; //delete[]�Ƕ�������ÿ�����������ͷ��ڴ棬���ַ������������һƬ�ڴ�delete�Ϳ�
//	}
//	void Print()
//	{
//		for (uint32_t i = 0; i < m_size; i++)
//			printf("%c", m_Data[i]);
//		printf("\n");
//	}
//private:
//	char* m_Data;
//	uint32_t m_size;
//
//};
//class Entity
//{
//public:
//	Entity(const String& name) :m_Name(name)
//	{
//
//	}
//	//Entity(String&& name):m_Name((String&&)name){}
//	Entity(String&& name) :m_Name(std::move(name)) {}
//	void PrintName()
//	{
//		m_Name.Print();
//	}
//private:
//	String m_Name;
//};
//
//int main()
//{
//	Entity entity(String("Cherno"));
//	entity.PrintName();
//	std::cin.get();
//}