//#include<iostream>
//#include<string>
////void Print(int val)
////{
////	std::cout << val << std::endl;
////}
////void Print(std::string str)
////{
////	std::cout << str << std::endl;
////}
////void Print(float val)
////{
////	std::cout << val << std::endl;
////}
////template<typename T> //ģ�庯������������ã��ǾͲ��ᱻ�����������òŻᴴ��
////template<class T> //typename��class��һ����˼
////void Print(T val)  
////{
////	std::cout << val << std::endl;
////}
////Ԫ��� �����Լ���һ���ֳ���
//template<typename T,int N>
//class Array {
//private:
//	T m_Array[N];
//public:
//	T GetSize() const { return N; }
//};
//int main() {
//	//Print(5);  //ģ����Ը��ݴ���Ĳ�������ȷ������
//	//Print<std::string>("hi");//Ҳ������ʽָ������
//	//Print("hello");
//	//Print("5.5f");
//	Array<int,5> array;
//	std::cout << array.GetSize() << std::endl;
//	std::cin.get();
//}