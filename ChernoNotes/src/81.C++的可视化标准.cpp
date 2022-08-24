//#include<iostream>
//#include<string>
//#include<chrono>
//#include<cmath>
//#include <algorithm>
//#include <fstream>
//
//#include <thread>
//
//struct ProfileResult
//{
//    std::string Name;
//    long long Start, End;
//    uint32_t ThreadID;
//};
//
//struct InstrumentationSession
//{
//    std::string Name;
//};
//
//class Instrumentor
//{
//private:
//    InstrumentationSession* m_CurrentSession;
//    std::ofstream m_OutputStream;
//    int m_ProfileCount;
//public:
//    Instrumentor()
//        : m_CurrentSession(nullptr), m_ProfileCount(0)
//    {
//    }
//
//    void BeginSession(const std::string& name, const std::string& filepath = "results.json")
//    {
//        m_OutputStream.open(filepath);
//        WriteHeader();
//        m_CurrentSession = new InstrumentationSession{ name };
//    }
//
//    void EndSession()
//    {
//        WriteFooter();
//        m_OutputStream.close();
//        delete m_CurrentSession;
//        m_CurrentSession = nullptr;
//        m_ProfileCount = 0;
//    }
//
//    void WriteProfile(const ProfileResult& result)
//    {
//        if (m_ProfileCount++ > 0)
//            m_OutputStream << ",";
//
//        std::string name = result.Name;
//        std::replace(name.begin(), name.end(), '"', '\'');
//
//        m_OutputStream << "{";
//        m_OutputStream << "\"cat\":\"function\",";
//        m_OutputStream << "\"dur\":" << (result.End - result.Start) << ',';
//        m_OutputStream << "\"name\":\"" << name << "\",";
//        m_OutputStream << "\"ph\":\"X\",";
//        m_OutputStream << "\"pid\":0,";
//        m_OutputStream << "\"tid\":" << result.ThreadID << ",";
//        m_OutputStream << "\"ts\":" << result.Start;
//        m_OutputStream << "}";
//
//        m_OutputStream.flush();
//    }
//
//    void WriteHeader()
//    {
//        m_OutputStream << "{\"otherData\": {},\"traceEvents\":[";
//        m_OutputStream.flush();
//    }
//
//    void WriteFooter()
//    {
//        m_OutputStream << "]}";
//        m_OutputStream.flush();
//    }
//
//    static Instrumentor& Get()
//    {
//        static Instrumentor instance;
//        return instance;
//    }
//};
////Instrumentation插桩，注入我们的代码并进行分析
//class InstrumentationTimer {
//private:
//	const char* m_Name;
//	std::chrono::time_point<std::chrono::steady_clock> m_StartTimepoint;
//	bool m_Stopped;
//public:
//	InstrumentationTimer(const char* name) :m_Name(name), m_Stopped(false)
//	{
//		m_StartTimepoint = std::chrono::high_resolution_clock::now();
//	}
//	~InstrumentationTimer()
//	{
//		if (!m_Stopped)
//			Stop();
//	}
//	void Stop()
//	{
//		auto endTimepoint = std::chrono::high_resolution_clock::now();
//
//		long long start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
//		long long end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
//		//std::cout << m_Name << ":" << end - start << "us\n";
//        uint32_t threadID = std::hash<std::thread::id>{}(std::this_thread::get_id());
//        Instrumentor::Get().WriteProfile({m_Name,start,end,threadID});
//		m_Stopped = true;
//	}
//	//~InstrumentationTimer()
//	//{
//	//	if(!m_Stopped)
//	//		Stop();
//	//}
//};
////宏替换函数按照如下方式写
//#define PROFILING 1
//#if PROFILING
//#define PROFILE_SCOPE(name) InstrumentationTimer timer##__LINE__(name)
////#define PROFILE_FUNCTION() PROFILE_SCOPE(__FUNCTION__)//预编译器自动获取函数名字，只有函数名字
// #define PROFILE_FUNCTION() PROFILE_SCOPE(__FUNCSIG__) //预编译器自动获取函数签名即包括参数
////#define PROFILE_SCOPE(__FUNCTION__) InstrumentationTimer timer##__LINE__(__FUNCTION__)
////这样定义是不行的 宏前面不能带宏__FUNCTION__
//#else
//#define PROFILE_SCOPE(name)
//#define PROFILE_FUNCTION() 
//#endif
//void Function1()
//{
//    PROFILE_FUNCTION();
//	for (int i = 0; i < 1000; i++)  
//		std::cout << "Hello World #" << i << std::endl;
//}
//
//void Function2()
//{
//    PROFILE_FUNCTION();
//	for (int i = 0; i < 1000; i++)
//		std::cout << "Hello World #" << sqrt(i) << std::endl;
//}
//
//void RunBenchmarks()
//{
//    PROFILE_FUNCTION();
//    std::cout << "Running Benchmarks...";
//
//    std::thread a([]() {Function1(); });
//    std::thread b(Function2);
//
//    a.join();
//    b.join();
//}
//
//int main()
//{
//    Instrumentor::Get().BeginSession("Profile");
//    //创建一个有给定文件名的新文件，我们这里默认参数使用result.json
//	//Function1();
//	//Function2();
//    RunBenchmarks();
//    Instrumentor::Get().EndSession();
//	std::cin.get();
//}