////CI持续集成指的是开发期间持续集成代码的过程，构建自动化和集成测试，类似makefile的Jenkins
////静态分析，检查源代码，试着找出问题所在，分析你的编程意图
//#include<iostream>
//
//void PrintSum(int a, int b)
//{
//	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
//}
//
//int main()
//{
//	int value = 0;
//	PrintSum(value++, value++);//未定义行为 C++标准没有真正定义这种情况下应该发生什么	
//	//C++14 Release 0+0=0,因为编译器MSVC允许并行 debug 0+1=1
//	//c++17 定义了两个参数必须一个接一个的计算 
//	PrintSum(++value, ++value);
//	//C++14 Debug release 2+2=4 未定义行为 C++标准没有真正定义这种情况下应该发生什么	
//	
//	std::cin.get();
//}