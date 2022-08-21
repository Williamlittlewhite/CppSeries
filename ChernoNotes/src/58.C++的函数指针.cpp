//#include<iostream>
//#include<vector>
////void HelloWorld(int a)
////{
////	std::cout << "Hello World! Value: "<< a  << std::endl;
////}
//void PrintValue(int value)
//{
//	std::cout << "Value: " << value << std::endl;
//}
//
//void ForEach(std::vector<int>& values, void(*func)(int))
//{
//	for (int value : values)
//		func(value);
//
//}
//int main()
//{
//	std::vector<int> values = { 1,5,4,2,3 };
//	//ForEach(values, PrintValue);
//	ForEach(values, [](int value) {std::cout << "Value: " << value << std::endl; }); //lambda函数实现
//	//HelloWorld();
//	//auto function = HelloWorld; 
//	//void(*function)() = HelloWorld;//与上句代码是一个意思,记住*function表示指向返回类型void()的函数
//	/*typedef void(*HelloWorldFunction)(int);  定义 void(int)函数指针的别名为HelloWorldFunction
//	HelloWorldFunction function = HelloWorld;     
//	function(8);
//	function(4);
//	std::cin.get();*/
//	std::cin.get();
//}