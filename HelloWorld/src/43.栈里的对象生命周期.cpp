//1、构造和析构的顺序：成员比对象先构造，后析构
//
//2、一个既可以在堆上分配内存，又可以在出作用域时自动释放的例子：

//class ScopePtr
//{
//private:
//	Example* m_Ptr;
//public:
//	ScopePtr(Example* ptr) :m_Ptr(ptr) {}
//	~ScopePtr() { delete m_Ptr; }
//};
//int main()
//{
//	{
//		ScopePtr e = new Example();
//	}
//	std::cin.get();
//}
// 
//这是一个最简单的智能指针例子