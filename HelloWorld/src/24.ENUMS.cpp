////1��ö�������÷���
//#include<iostream>
//class Log
//{
//public:
//	enum Level {
//		LevelError = 0, LevelWarning = 1, LevelInfo = 2
//	};
//	//����ָ����һ���Ӷ��ٿ�ʼ��Ĭ����0��Ҳ����ָ���������ͣ�enum Level : unsigned int ��
//	//ö��������ʵ������һ����ֻ�����������������Զ����ô�С
//	//2��������������ڲ���ö�ٱ���ʱ���൱��������������Log::LevelError��ö�ٱ����ļ��������һ���������ԱȽϴ�С������֮���
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