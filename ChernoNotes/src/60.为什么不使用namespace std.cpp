////lambda是不需要通过函数定义就可以定义一个函数的方式
//#include<iostream>
//#include<vector>
//#include<functional>
//#include<string>
//using namespace std;  //不一定放在全局作用域，可以放在任何一个作用域
////个人喜好用帕斯卡命名法，每个单词首字母大写，中间不能有空格线或下划线
////c++喜好蛇形命名法，小写单词，中间用下划线连接
//
//namespace apple {
//	void print(const std::string& text) {
//		std::cout << text << std::endl;
//	}
//}
//void ForEach(std::vector<int>& values, const std::function<void(int)>& func)
////写成这样就可以用有捕获lambda函数了
//{
//	for (int value : values)
//		func(value);
//
//}
//namespace orange {
//	void print(const char* text)
//	{
//		std::string temp = text;
//		std::reverse(temp.begin(), temp.end());
//		std::cout << temp << std::endl;
//	}
//}
//using namespace apple;
//using namespace orange;
////该例子说明了为什么不用using namespace
////永远不要在头文件里using namespace！
//int main()
//{
//	print("hello");
//	/*std::vector<int> values = { 1,5,4,2,3 };
//	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
//	std::cout << *it << std::endl;
//
//	int a = 5;
//	auto lambda = [=](int value) {std::cout << "Value: " << a << std::endl; };
//	
//	ForEach(values, lambda);*/
//	std::cin.get();
//}