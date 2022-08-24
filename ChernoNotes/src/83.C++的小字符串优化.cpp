////15个字符(包括)以下会在栈缓冲区，16个字符或者以上就会调用heap malloc分配内存
//#include<iostream>
//#include<string>
//
//void* operator new(size_t size)
//{
//	std::cout << "Allocating " << size << " bytes\n"; //在debug模式下输出，事实上应该要输出的
//	//这仅仅是调试字符串的所导致的问题 
//	return malloc(size);
//}
//int main()
//{
//	std::string name = "Cherno Small St";//只有六个字符，只存储在静态分配的缓存区，不会触及堆内存
//	std::cin.get();
//	return 0;
//}