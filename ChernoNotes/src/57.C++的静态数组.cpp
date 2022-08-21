//#include<iostream>
//#include<array>
//
////void PrintArray(int* array, int size)
////{
////	for(int i = 0; i < size;)
////}
//template<int N>
//void PrintArray(const std::array<int,N>& data)
//{
//	for (int i = 0; i < data.size();)
//}
//int main()
//{
//	std::array<int, 5> data;
//	data.size();
//	data[0] = 2;
//	data[4] = 1;
//	data[5] = 3;//越界的时候一定会被编译器阻止，有边界检查
//	int dataOld[5];
//	dataOld[0] = 0;//越界覆盖实际上不拥有的数据，有的编译器会报错，没有边界检查
//	std::cin.get();
//}