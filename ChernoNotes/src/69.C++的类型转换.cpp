//#include<iostream>
//class Base
//{
//public:
//	Base() {}
//	virtual ~Base() { }
//};
//class Derived : public Base
//{
//public:
//	Derived() { }
//	~Derived() { }
//private:
//
//};
//
//class AnotherClass : public Base
//{
//public:
//	AnotherClass(){};
//	~AnotherClass(){};
//};
//
//int main()
//{
//	//double value = 5.25;
//	//int a = (int)value; //显式类型转换
//	//double a = (int)value + 5.3;//C语言风格显式类型转换
//	//double s = static_cast<int>(value) + 5.3; 
//	//C++语言风格的类型转换，不做任何C语言风格转换不能做的事情
//	//AnotherClass *s = reinterpret_cast<AnotherClass*>(&value);
//	//static_cast静态类型转换，编译检测，就是普通的类型转换
//	//reinterpret_cast这种类型转换是将内存强制解释为其他类型的内存，类型双关的转换,将value指针处的数据解释为AnotherClass实例的数据
//	//const_cast移除或者添加变量的const限定
//	Derived* derived = new Derived();
//	Base* base = derived; //base实际上是Derived类的一个实例
//	AnotherClass* ac = dynamic_cast<AnotherClass*>(base); 
//	if (!ac)
//		std::cout << "不是那个类！" << std::endl;
//	Derived* ace = dynamic_cast<Derived*>(base);
//	if (ace)
//		std::cout << "是那个类！" << std::endl;
//	//dynamic_cast经常检测某个指针所指对象是否是某个类的实例，若不是返回0否则返回1
//	//std::cout << a << std::endl;
//
//}