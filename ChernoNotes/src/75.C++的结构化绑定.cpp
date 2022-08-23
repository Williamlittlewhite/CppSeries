////C++17的特性 结构化绑定
//#include<iostream>
//#include<tuple>
//#include<string>
//std::tuple<std::string, int> CreatePerson()
//{
//	return {"Cherno",24 };
//}
//int main()
//{
//	//tuple取值第一方式,tuple可以搞几个数组元素
//	/*std::tuple<std::string, int> person = CreatePerson();
//	std::string& name = std::get<0>(person);
//	int age = std::get<1>(person);*/
//
//	//tuple取值第二方法
//	//std::string name;
//	//int age;
//	//std::tie(name, age) = CreatePerson();
//
//	//C++17结构化绑定特性
//	auto[name, age] = CreatePerson();
//	std::cout << name <<"," << age<<std::endl;
//}