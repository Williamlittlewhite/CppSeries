////lambda是不需要通过函数定义就可以定义一个函数的方式
//#include<iostream>
//#include<vector>
//#include<functional>
////void ForEach(std::vector<int>& values, void(*func)(int))
////{
////	for (int value : values)
////		func(value);
////
////}
//void ForEach(std::vector<int>& values, const std::function<void(int)>& func) 
////写成这样就可以用有捕获lambda函数了
//{
//	for (int value : values)
//		func(value);
//
//}
//int main()
//{
//	std::vector<int> values = { 1,5,4,2,3 };
//	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
//	std::cout << *it << std::endl;
//	/*int a = 5;
//	auto lambda = [=](int value) {std::cout << "Value: " << a << std::endl; };
//	auto lambda = [=](int value) mutable { a = 6; std::cout << "Value: " << a << std::endl; };*/
//	//[]表示捕获，即如何传递变量给lambda函数 =表示通过值传递所有的变量 &通过引用传递所有变量
//	//非捕获lambda可以隐式转换为函数指针，有捕获lambda不可以
//	//lambda函数必须用mutable才能改变捕获变量的值
//	//ForEach(values,lambda); //lambda函数
//	std::cin.get();
//}