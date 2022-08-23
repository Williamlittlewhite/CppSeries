////C++17的新特性 std::any 认为其实没啥用 最好用std::variant和void*
//#include<iostream>
//#include<any>
//void* operator new(size_t size)
//{
//	return malloc(size);
//}
//struct CustomClass
//{
//	std::string s0, s1; //这个类超过了32个字节
//};
//int main()
//{
//	std::any data;
//	data = 2;
//	data = CustomClass(); //当超过了32个字节的时候，那么std::any会调用new动态分配内存
//	//data = "Cherno";
//	//data = std::string("Cherno");
//	//std::any可以存取任何数据
//	//std::string string = std::any_cast<std::string>(data); 
//	//如果data不是你想要转换的类型，将会抛出一个类型转换的异常
//	std::string& string = std::any_cast<std::string&>(data);
//	//用引用必须要在templates也引入引用才可以
//	std::cin.get();
//}