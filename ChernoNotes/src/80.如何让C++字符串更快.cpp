//#include<iostream>
//#include<string>
//
//static uint32_t s_AllocCount = 0;
//void* operator new(size_t size)//追踪内存的方法就是重载new
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
//	//这么写分配了一次8字节内存
//	/*PrintName("Bai Zexin");*/
//	//std::string name = "Bai Zexin";
//	const char* name = "Bai Zexin"; //std::string也会调用分配，用原始C就会在常量字符区了
//#if 0
//	std::string firstName = name.substr(0, 3);
//	std::string lastName = name.substr(4); //substr也会分配一次内存
//	//这么写依然分配了一次8字节内存
//	/*std::cout << firstName << std::endl;*/
//#else
//	//std::string_view firstName(name.c_str(), 3);
//	//std::string_view lastName(name.c_str() + 4, 5); //通过视图提取字符串,不会进行分配，更快！
//	std::string_view firstName(name,3);
//	std::string_view lastName(name + 4, 5); //通过视图提取字符串,不会进行分配，更快！
//#endif
//	PrintName(firstName);
//	PrintName(lastName);
//	std::cout << s_AllocCount << " allocations" << std::endl;
//	std::cin.get();
//}