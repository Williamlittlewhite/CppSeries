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
//	//auto c = 5; //auto�е��c++���������������
//	//int a = 5;
//	//auto b = a;
//	//std::string name = GetName();
//	//auto name = GetName(); //�������api�ĳ���char* ��ô��һ�����ᱨ���������������������
//	////���еĴ���
//	//int a = name.size();
//	//std::cout << b << std::endl;
//	//std::vector<std::string> strings;
//	//strings.push_back("Apple");
//	//strings.push_back("Orange");
//	/*for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
//		std::cout << *it << std::endl;*/
//	//for (auto it = strings.begin(); it != strings.end(); it++)
//	//	std::cout << *it << std::endl;  //�������������auto
//	//using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>; //������
//	//typedef std::unordered_map<std::string, std::vector<Device*>> Devicemap; //������
//	DeviceManager dm;
//	const std::unordered_map<std::string, std::vector<Device*>>& deivces = dm.GetDevices();
//	const DeviceMap& devices1 = dm.GetDevices();
//	const auto& devices2 = dm.GetDevices();
//	auto devices3 = dm.GetDevices(); //auto�������κ�const��&
//	std::cin.get();
//}