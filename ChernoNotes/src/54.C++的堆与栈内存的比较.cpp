////1.栈通常是操作系统预定义的2M字节大小的内存区域
////2.堆也是操作系统预定义的内存区域，但是可以生长并且随着应用程序的进行而修改
//#include<iostream>
//#include<string>
//struct Vector3
//{
//	float x, y, z;
//	Vector3():x(10),y(11),z(12){}
//};
//
//int main()
//{
//	{
//		int value = 5; //栈上分配整数  栈之间分配内存会有安全守卫防止越界 从高地址到低地址分配 汇编就是移动指针所以快
//		int array[5];//栈上分配数组
//		array[0] = 1;
//		array[1] = 2;
//		array[2] = 3;
//		array[3] = 4;
//		array[4] = 5;
//		Vector3 vector;//栈上分配类 栈会弹出所有内存在作用域超出时候
//	}
//	int* hvalue = new int;
//	*hvalue = 5; //堆上分配整数
//	int* harray = new int[5];//堆上分配数组 make_unique,make_shared都是堆上分配  实际上调用了c的malloc函数
//	//malloc维护一个空闲列表 然后分配内存
//	harray[0] = 1;
//	harray[1] = 2;
//	harray[2] = 3;
//	harray[3] = 4;
//	harray[4] = 5;
//	Vector3* hvector = new Vector3();//堆上分配类
//	delete hvalue;
//	delete[] harray;
//	delete hvector;
//	std::cin.get();
//}