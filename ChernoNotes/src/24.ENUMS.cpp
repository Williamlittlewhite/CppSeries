////1、枚举类型用法：
//#include<iostream>
//class Log
//{
//public:
//	enum Level {
//		LevelError = 0, LevelWarning = 1, LevelInfo = 2
//	};
//	//可以指定第一个从多少开始，默认是0，也可以指定整型类型：enum Level : unsigned int 等
//	//枚举类型其实和整数一样，只不过有了命名，且自动设置大小
//	//2、在外面调用类内部的枚举变量时，相当于类是作用域，如Log::LevelError，枚举变量的计算和整数一样，都可以比较大小，运算之类的
//private:
//	Level m_LogLevel = LevelInfo;
//public:
//	void SetLevel(Level level)
//	{
//		m_LogLevel = level;
//	}
//	void Warn(const char* message)
//	{
//		if(m_LogLevel>=LevelWarning)
//		std::cout << "[WARNING]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if(m_LogLevel>=LevelInfo)
//			std::cout << "[Info]:" << message << std::endl;
//	}
//	void Error(const char* message)
//	{
//		if(m_LogLevel>=LevelError)
//			std::cout << "[Error]:" << message << std::endl;
//	}
//
//};
//
//int main() {
//	Log log;
//	log.SetLevel(Log::LevelInfo);
//	log.Warn("Hello!");
//	log.Error("Hello!");
//	log.Info("Hello!");
//	std::cin.get();
//}