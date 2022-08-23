//#include<iostream>
//#include<memory>
//#include<chrono>
//#include<array>
//class Timer {
//public:
//	Timer() {
//		m_StartTimepoint = std::chrono::high_resolution_clock::now();
//	}
//	~Timer() {
//		Stop();
//	}
//	void Stop(){
//		auto EndTimepoint = std::chrono::high_resolution_clock::now();
//		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
//		auto end = std::chrono::time_point_cast<std::chrono::microseconds>
//			(EndTimepoint).time_since_epoch().count();
//		auto duration = end - start;
//		double ms = duration * 0.001;
//
//		std::cout << duration << "us("<<ms<<"ms)\n";
//	}
//private:
//	std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimepoint;
//};
//int main()
//{
//	//基准测试要确定事实上是自己想测的时间，可以看汇编代码是否是自己想测的部分，编译器会做优化
//	/*int value = 0;
//	{
//		Timer timer;
//		for (int i = 0; i < 1000000; i++)
//			value += 2;
//		std::cout << value << std::endl;
//	}*/
//	struct Vector2 {
//		float x, y;
//	};
//	std::cout << "Make Shared\n";
//	{
//		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::make_shared<Vector2>(); 
//		//是直接在堆上新建一块足够大的内存，其中包含两部分，上面是内存（用来使用），下面是控制块（包含引用计数），然后用A的构造函数去初始化分配的内存（分配一块内存的步骤：先分配内存，再进分配的内存调用构造函数进行构造，构造完毕才能使用）
//	}
//	std::cout << "New Shared\n";
//	{
//		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
//		//先在堆上分配一块内存，然后在堆上再建一个智能指针控制块，这两个东西是不连续的，会造成内存碎片化
//	}
//	std::cout << "Make Unique\n";
//	{
//		std::array<std::unique_ptr<Vector2>, 1000> sharedPtrs;
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::make_unique<Vector2>();
//	}
//	std::cin.get();
//}