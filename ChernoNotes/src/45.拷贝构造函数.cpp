//#include<iostream>
//#include<string>
//#include<cstring>
//
////String类 复制与拷贝构造函数
//class String {
//private:
//	char* m_Buffer;
//	unsigned int m_Size;
//public:
//	String(const char* string)
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size+1]; //注意空字符串的存在 不要忘记释放内存
//		memcpy(m_Buffer, string, m_Size+1);
//			
//	}
//	//:m_Buffer(m_Buffer),m_Size(m_Size) 默认拷贝构造是浅拷贝 会发生错误  
//	//可以用=delete删除拷贝构造
//	String(const String& other)
//		: m_Size(other.m_Size) //深拷贝的方法	
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
//	String string = "Cherno";//这里是隐式调用构造函数
//	String second = string; //这样会报错，因为浅拷贝导致两个指针变量存取相同地址，释放同一内存两次而报错
//	second[2] = 'a';
//	std::cout << string << std::endl;
//	std::cout << second << std::endl;
//	std::cin.get();
//}