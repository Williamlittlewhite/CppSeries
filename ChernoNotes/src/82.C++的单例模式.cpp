////想要拥有应用于某种全局数据集的功能，且我们只是想要重复使用，将类作为命名空间，调用某些函数，不要求单例类像普通类一样工作，只是一种组织一堆全局变量和静态函数的方式
//#include<iostream>
//
////class Singleton
////{
////public:
////	Singleton(const Singleton&) = delete;
////	static Singleton& Get()
////	{
////		return s_Instance;
////	}
////	//需要静态函数，返回这种特定类型的引用或者指针
////
////	void Function(){}
////private:
////	Singleton() {} //构造函数必须私有，因为不允许被实例化
////	static Singleton s_Instance;//创建唯一静态实例
////};
////
////Singleton Singleton::s_Instance;
//class Random
//{
//public:
//	Random(const Random&) = delete;
//	static Random& Get()
//	{
//		static Random s_Instance;
//		return s_Instance;
//	}
//	//需要静态函数，返回这种特定类型的引用或者指针
//	
//	/*float Float() { return m_RandomGenerator; }*/
//	static float Float() { return Get().IFloat(); }
//private:
//	Random() {} //构造函数必须私有，因为不允许被实例化
//	float m_RandomGenerator = 0.5f;
//	/*static Random s_Instance;*///创建唯一静态实例
//	float IFloat() { return m_RandomGenerator; }
//};
//
////Random Random::s_Instance;
//int main()
//{
//	/*float number  = Random::Get().Float();*/
//	/*auto& random = Random::Get();
//	float number = random.Float();*/
//	//Singleton::Get().Function();
//	//Singleton instance = Singleton::Get();
//	//instance.Function();  为了防止这样拷贝单实例，必须删除拷贝构造
//	float number = Random::Float();
//	std::cout << number << std::endl;
//	std::cin.get();
//}