////C++17����
//#include<iostream>
//#include<string>
//#include<variant>
//#include<optional>
//enum ErrorCode
//{
//	None = 0, Notfound = 1, NoAccess = 2
//};
//std::variant<std::string,int> ReadFileAsString() //��ȡ�ɹ������ַ����������errortype
//{
//	return {};
//}
//int main()
//{
//	std::variant<std::string, int> data;
//	//union���ڴ����������͵����ֵ
//	//std::variant�Ǵ�����һ���࣬���������ݽṹ�ŵ�����
//	std::cout << sizeof(int) << "\n"; //4
//	std::cout << sizeof(std::string) << "\n";//28
//	std::cout << sizeof(data) << "\n";//32
//	data = "Cherno";
//	data.index(); //0,�����������ݶ�Ӧ���͵�����
//	std::cout << std::get<std::string>(data) << "\n";
//	if (auto* value = std::get_if<std::string>(&data))
//	{
//		std::string& v = *value;;
//	}
//	else
//	{
//
//	}
//	//�����ȡ���������ͷ���0��������Ի�ȡ���ظ����͵�ָ��
//	data = 2;
//	data.index(); //1,�����������ݶ�Ӧ���͵�����
//	std::cout << std::get<int>(data) << "\n";
//	std::cin.get();
//}