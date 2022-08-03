//1.函数内的static变量，不能在函数作用域外被访问，但是多次调用该函数，其值有记忆性，也就是说函数调用结束后，其内存仍然没被释放掉，延长了其生命周期。此方法适用的一个例子是单例Singleton：
//class Singleton{
//public:
//	static Singleton& Get()
//	{
//		static Singleton instance;
//		return instance;
//	}
//	void Hello() {};
//};
//
//int main() {
//	Singleton::Get().Hello();
//}
//如果在不把instance定义为static，则在Get()作用域结束后，该实例就会被销毁，由于返回的是Singleton的引用，就会导致引用错误，如果是返回复制就没问题。