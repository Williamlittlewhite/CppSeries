////左值：有地址的值（located value），右值临时值
//#include<iostream>
////int GetValue()
////{
////	return 10;
////}
////int& GetValue()  //左值引用
////{
////	static int value = 10;
////	return value;
////}
////void Setvalue(const int& value)//这么写同时支持左值和右值 int&value只支持左值
////{
////
////}
//void PrintName(const std::string& name) //这种写法兼容临时的右值和实际存在的左值变量
//{
//	std::cout << " [lvaluue] " << name << std::endl;
//}
//void PrintName(const std::string&& name) //这种写法为右值引用，不能传递左值但可以传递右值,移动语义很有用
//{                                         //如果该写法存在，那么上面的兼容写法还是优先采用这个的
//	std::cout << " [rvalue] " << name << std::endl;
//}
//int main()
//{
//	//int i = 10; //左值大部分时间在等号左边，右值在右边
//	////10 = i;//10没有位置，不能在10存储数据
//	////int a = i;//左值=左值的值
//	////int i = GetValue();//GetValue返回一个临时的右值
//	////GetValue() = 10; //右值不能赋值，但是返回左值引用就可以赋值了
//	//Setvalue(i); //参数是左值
//	//Setvalue(10);//参数是右值，函数被调用时候，该右值会被用来创建一个左值
//	////不能将左值引用绑定到一个右值上，左值引用只能是左值
//	////int& a = 10;  //不能这样左值引用
//	//const int& a = 10;//可以这样，特殊规则，编译器用你的存储创建一个变量(左值)，然后把它赋值给那个引用
//	std::string firstName = "Bai";
//	std::string lastName = "Zexin";
//
//	std::string fullName = firstName + lastName;
//	PrintName(fullName);//fullName是左值
//	PrintName(firstName + lastName); //firstName + lastName是右值
//	std::cin.get();
//}