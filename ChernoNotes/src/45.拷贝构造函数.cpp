//#include<iostream>
//#include<string>
//#include<cstring>
//
////String�� �����뿽�����캯��
//class String {
//private:
//	char* m_Buffer;
//	unsigned int m_Size;
//public:
//	String(const char* string)
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size+1]; //ע����ַ����Ĵ��� ��Ҫ�����ͷ��ڴ�
//		memcpy(m_Buffer, string, m_Size+1);
//			
//	}
//	//:m_Buffer(m_Buffer),m_Size(m_Size) Ĭ�Ͽ���������ǳ���� �ᷢ������  
//	//������=deleteɾ����������
//	String(const String& other)
//		: m_Size(other.m_Size) //����ķ���	
//	{
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
//	}
//	~String() 
//	{
//		delete[] m_Buffer;
//	}
//	char& operator[](unsigned int index)
//	{
//		return this->m_Buffer[index];
//	}
//	
//	
//	friend std::ostream& operator<<(std::ostream& stream, String& string);
//};
//
//std::ostream& operator<<(std::ostream& stream, String& string){
//	stream << string.m_Buffer;
//	return stream;
//}
//int main() {
//	String string = "Cherno";//��������ʽ���ù��캯��
//	String second = string; //�����ᱨ����Ϊǳ������������ָ�������ȡ��ͬ��ַ���ͷ�ͬһ�ڴ����ζ�����
//	second[2] = 'a';
//	std::cout << string << std::endl;
//	std::cout << second << std::endl;
//	std::cin.get();
//}