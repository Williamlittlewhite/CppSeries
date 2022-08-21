////lambda是不需要通过函数定义就可以定义一个函数的方式
//#include<iostream>
//#include<vector>
//#include<functional>
//#include<string>
////namespace可以解决不同库之间常用的函数之间的冲突，如果是兼容C库则通过命名解决如glfwInit
////为了解决命名冲突的问题
////namespace嵌套使用的时候，建议将所有namespace放在一行
////类本身就是名称空间
//namespace apple {
//	void print(const char* text) {
//		std::cout << text << std::endl;
//	}
//}
//namespace orange {
//	void print(const char* text)
//	{
//		std::string temp = text;
//		std::reverse(temp.begin(), temp.end());
//		std::cout << temp << std::endl;
//	}
//}
//
//int main()
//{
//	namespace a = apple;
//	a::print("hi");
//	//apple::print("hello");
//	//不用namespace就会产生link或者compile错误
//	std::cin.get();
//}