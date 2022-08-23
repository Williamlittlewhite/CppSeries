////C++17特性
//#include<iostream>
//#include<string>
//#include<variant>
//#include<optional>
//enum ErrorCode
//{
//	None = 0, Notfound = 1, NoAccess = 2
//};
//std::variant<std::string,int> ReadFileAsString() //读取成功就是字符，否则就是errortype
//{
//	return {};
//}
//int main()
//{
//	std::variant<std::string, int> data;
//	//union的内存是其中类型的最大值
//	//std::variant是创建了一个类，把两个数据结构放到类里
//	std::cout << sizeof(int) << "\n"; //4
//	std::cout << sizeof(std::string) << "\n";//28
//	std::cout << sizeof(data) << "\n";//32
//	data = "Cherno";
//	data.index(); //0,返回现在数据对应类型的索引
//	std::cout << std::get<std::string>(data) << "\n";
//	if (auto* value = std::get_if<std::string>(&data))
//	{
//		std::string& v = *value;;
//	}
//	else
//	{
//
//	}
//	//如果获取不到该类型返回0，如果可以获取返回该类型的指针
//	data = 2;
//	data.index(); //1,返回现在数据对应类型的索引
//	std::cout << std::get<int>(data) << "\n";
//	std::cin.get();
//}