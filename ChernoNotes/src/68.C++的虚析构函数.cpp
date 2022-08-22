//#include<iostream>
//class Base
//{
//public:
//	Base() { std::cout << "Base Constructor\n"; }
//	virtual ~Base() { std::cout << "Base Destructor\n"; }
//	//虚析构函数不是覆写析构函数，而是加上一个析构函数
//	//这意味着这个类有可能被扩展为子类，子类的析构函数也要调用
//};
//class Derived : public Base
//{
//public:
//	Derived() { m_Array = new int[5]; std::cout << "Derived Constructor\n"; }
//	~Derived() { delete[] m_Array; std::cout << "Derived Destructor\n"; }
//private:
//	int* m_Array;
//};
//
//
//int main()
//{
//	Base* base = new Base();
//	delete base;
//	std::cout << "--------------------\n";
//	Derived* derived = new Derived(); 
//	//派生类构造会先构造父类再构造派生类 析构会先析构子类再析构父类
//	delete derived;
//	std::cout << "--------------------\n";
//	Base* poly = new Derived(); // 如果不定义虚函数会直接导致内存泄露,因为没有调用继生类的析构
//	delete poly;
//	std::cin.get();
//}