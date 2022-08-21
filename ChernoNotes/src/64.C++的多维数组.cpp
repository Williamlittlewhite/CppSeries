//#include<iostream>
//
//int main()
//{
//	int* array = new int[50]; //分配了200字节的内存 50*4，仅仅分配了200个字节的内存
//	int** a2d = new int* [50]; //分配了200字节的内存，实际上在做一样的事情
//	//array[0] = 0;//array[0]是一个int
//	//a2d[0] = nullptr; //a2d[0]是一个int* 是指针
//	for (int i = 0; i < 50; i++)
//		a2d[i] = new int[50];
//	//这种定义方法实际上是创建了50个单独的缓冲区，每个缓冲区50个整数，会导致内存碎片(cache miss)
//	a2d[0][0] = 0;
//	a2d[0][1] = 0;
//	a2d[0][2] = 0;
//	//delete[] a2d; //这样的写法会导致内存泄漏，无法再次访问a2d[i]进行delete
//	//正确的删除方法如下所示：
//	for (int i = 0; i < 50; i++)
//		delete[] a2d[i];
//	delete[] a2d;
//
//	//也可以这样处理二维数组
//	int* array = new int[50 * 50];
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 5; j++)
//			array[j + 5 * i] = 2;  //每次i增加1，就向前跳5个元素，这种写法比上面的快多了
//	std::cin.get();
//
//
//}