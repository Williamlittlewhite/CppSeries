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
//	//��׼����Ҫȷ����ʵ�����Լ�����ʱ�䣬���Կ��������Ƿ����Լ����Ĳ��֣������������Ż�
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
//		//��ֱ���ڶ����½�һ���㹻����ڴ棬���а��������֣��������ڴ棨����ʹ�ã��������ǿ��ƿ飨�������ü�������Ȼ����A�Ĺ��캯��ȥ��ʼ��������ڴ棨����һ���ڴ�Ĳ��裺�ȷ����ڴ棬�ٽ�������ڴ���ù��캯�����й��죬������ϲ���ʹ�ã�
//	}
//	std::cout << "New Shared\n";
//	{
//		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
//		//���ڶ��Ϸ���һ���ڴ棬Ȼ���ڶ����ٽ�һ������ָ����ƿ飬�����������ǲ������ģ�������ڴ���Ƭ��
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