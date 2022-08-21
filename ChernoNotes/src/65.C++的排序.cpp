//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//int main()
//{
//	std::vector<int> values = { 3,5,1,4,2 };
//	std::sort(values.begin(), values.end(),std::greater<int>()); 
//	//对于整数，默认升序排列,利用functional std::greater<int>可变为降序
//	//也可利用lambda函数如下 lambda函数返回true表示第一个参数在数组前面，返回false表示第二个参数在数组前面
//	std::sort(values.begin(), values.end(), [](int a, int b) { 
//		if (a == 1)
//			return false;
//		if (b == 1)
//			return true;
//		return a < b; 
//		});
//	for (int value : values)
//		std::cout << value << std::endl;
//	std::cin.get();
//	return 0;
//}