////C++17������ �ṹ����
//#include<iostream>
//#include<tuple>
//#include<string>
//std::tuple<std::string, int> CreatePerson()
//{
//	return {"Cherno",24 };
//}
//int main()
//{
//	//tupleȡֵ��һ��ʽ,tuple���Ը㼸������Ԫ��
//	/*std::tuple<std::string, int> person = CreatePerson();
//	std::string& name = std::get<0>(person);
//	int age = std::get<1>(person);*/
//
//	//tupleȡֵ�ڶ�����
//	//std::string name;
//	//int age;
//	//std::tie(name, age) = CreatePerson();
//
//	//C++17�ṹ��������
//	auto[name, age] = CreatePerson();
//	std::cout << name <<"," << age<<std::endl;
//}