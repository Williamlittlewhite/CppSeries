//#include<iostream>
//struct Entity //如果struct为空，至少有一个字节用来寻址，如果有变量，就可以看为数组
//{
//	int x, y;
//	int* GetPositions()
//	{
//		return &x;
//	}
//};
//int main()
//{
//	//int a = 50;
//	////double value = a;//隐式转换 两个变量内存地址没有联系
//	////double value = (double)a; //显式转换 两个变量内存地址没有联系
//	////double value = *(double*)&a;//类型双关从int到double,多了4个没有初始化的字节，输出不可控
//	// 要把我已经拥有的内存，当做不同类型的内存来对待，将某个类型作为指针转换为其他类型，即(double*)&a
//	//double& value = *(double*)&a;
//	//value = 0.0;//这样是用引用的方式往8字节空间里面写8个字节，没有问题
//	//std::cout << value << std::endl;
//	Entity e = { 5,8 };
//	//int x = e.x;
//	//int y = *(int*)((char*)&e + 4); //还可以这么玩结构体，这就是对内存的直接操作！
//	//std::cout << y << std::endl;
//	//int* position = (int*) & e;
//	int* position = e.GetPositions();
//	std::cout << position[0] << "," << position[1] << std::endl; //可以这么输出元素，牛逼啊
//	std::cin.get();
//}