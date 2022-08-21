//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_map>
////std::string GetName()
////{
////	return "Cherno";
////}
//auto GetName() -> char*
//{
//	return  "Cherno";
//}
//class Device {};
//class DeviceManager
//{
//private:
//	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
//public:
//	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
//	{
//		return m_Devices;
//	}
//};
//int main()
//{
//	//auto c = 5; //auto有点把c++变成了弱类型语言
//	//int a = 5;
//	//auto b = a;
//	//std::string name = GetName();
//	//auto name = GetName(); //如果这里api改成了char* 那么下一句代码会报错，因此这里倾向于用上面
//	////那行的代码
//	//int a = name.size();
//	//std::cout << b << std::endl;
//	//std::vector<std::string> strings;
//	//strings.push_back("Apple");
//	//strings.push_back("Orange");
//	/*for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
//		std::cout << *it << std::endl;*/
//	//for (auto it = strings.begin(); it != strings.end(); it++)
//	//	std::cout << *it << std::endl;  //这种情况可以用auto
//	//using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>; //新特性
//	//typedef std::unordered_map<std::string, std::vector<Device*>> Devicemap; //旧特性
//	DeviceManager dm;
//	const std::unordered_map<std::string, std::vector<Device*>>& deivces = dm.GetDevices();
//	const DeviceMap& devices1 = dm.GetDevices();
//	const auto& devices2 = dm.GetDevices();
//	auto devices3 = dm.GetDevices(); //auto不处理任何const和&
//	std::cin.get();
//}