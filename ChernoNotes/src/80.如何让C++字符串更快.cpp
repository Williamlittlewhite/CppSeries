//#include<iostream>
//#include<string>
//
//static uint32_t s_AllocCount = 0;
//void* operator new(size_t size)//׷���ڴ�ķ�����������new
//{
//	s_AllocCount++;
//	std::cout << "Allocating " << size << " bytes\n";
//	return malloc(size);
//}
////void PrintName(const std::string& name)
////{
////	std::cout << name << std::endl;
////}
//void PrintName(const std::string_view name)
//{
//	std::cout << name << std::endl;
//}
//int main()
//{
//	/*std::string name = "Bai Zexin";
//	PrintName(name);*/
//	//��ôд������һ��8�ֽ��ڴ�
//	/*PrintName("Bai Zexin");*/
//	//std::string name = "Bai Zexin";
//	const char* name = "Bai Zexin"; //std::stringҲ����÷��䣬��ԭʼC�ͻ��ڳ����ַ�����
//#if 0
//	std::string firstName = name.substr(0, 3);
//	std::string lastName = name.substr(4); //substrҲ�����һ���ڴ�
//	//��ôд��Ȼ������һ��8�ֽ��ڴ�
//	/*std::cout << firstName << std::endl;*/
//#else
//	//std::string_view firstName(name.c_str(), 3);
//	//std::string_view lastName(name.c_str() + 4, 5); //ͨ����ͼ��ȡ�ַ���,������з��䣬���죡
//	std::string_view firstName(name,3);
//	std::string_view lastName(name + 4, 5); //ͨ����ͼ��ȡ�ַ���,������з��䣬���죡
//#endif
//	PrintName(firstName);
//	PrintName(lastName);
//	std::cout << s_AllocCount << " allocations" << std::endl;
//	std::cin.get();
//}