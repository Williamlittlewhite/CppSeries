////��Ҫӵ��Ӧ����ĳ��ȫ�����ݼ��Ĺ��ܣ�������ֻ����Ҫ�ظ�ʹ�ã�������Ϊ�����ռ䣬����ĳЩ��������Ҫ����������ͨ��һ��������ֻ��һ����֯һ��ȫ�ֱ����;�̬�����ķ�ʽ
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
////	//��Ҫ��̬���������������ض����͵����û���ָ��
////
////	void Function(){}
////private:
////	Singleton() {} //���캯������˽�У���Ϊ������ʵ����
////	static Singleton s_Instance;//����Ψһ��̬ʵ��
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
//	//��Ҫ��̬���������������ض����͵����û���ָ��
//	
//	/*float Float() { return m_RandomGenerator; }*/
//	static float Float() { return Get().IFloat(); }
//private:
//	Random() {} //���캯������˽�У���Ϊ������ʵ����
//	float m_RandomGenerator = 0.5f;
//	/*static Random s_Instance;*///����Ψһ��̬ʵ��
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
//	//instance.Function();  Ϊ�˷�ֹ����������ʵ��������ɾ����������
//	float number = Random::Float();
//	std::cout << number << std::endl;
//	std::cin.get();
//}