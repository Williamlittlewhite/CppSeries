//#include<iostream>
//#include<thread>
//
//static bool s_Finished = false;
//void DoWork()
//{
//	using namespace std::literals::chrono_literals;
//	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;
//	while (!s_Finished)
//	{
//		std::cout << "Working...\n";
//		std::this_thread::sleep_for(1s);
//	}
//}
//
//int main()
//{
//	std::thread worker(DoWork);//分一个新的worker线程去执行Dowork函数
//	std::cin.get();
//	s_Finished = true;
//	worker.join();//在当前线程上，阻塞当前线程，等待worker线程完成工作后再继续执行主线程
//	std::cout << "Finished." << std::endl;
//	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;
//	std::cin.get();
//}