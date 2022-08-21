//#include<iostream>
//#include<string>
////void Print(int val)
////{
////	std::cout << val << std::endl;
////}
////void Print(std::string str)
////{
////	std::cout << str << std::endl;
////}
////void Print(float val)
////{
////	std::cout << val << std::endl;
////}
////template<typename T> //模板函数如果不被调用，那就不会被创建，被调用才会创建
////template<class T> //typename和class是一个意思
////void Print(T val)  
////{
////	std::cout << val << std::endl;
////}
////元编程 机器自己编一部分程序
//template<typename T,int N>
//class Array {
//private:
//	T m_Array[N];
//public:
//	T GetSize() const { return N; }
//};
//int main() {
//	//Print(5);  //模板可以根据传入的参数自行确定类型
//	//Print<std::string>("hi");//也可以显式指定类型
//	//Print("hello");
//	//Print("5.5f");
//	Array<int,5> array;
//	std::cout << array.GetSize() << std::endl;
//	std::cin.get();
//}