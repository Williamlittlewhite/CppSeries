//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//int main()
//{
//	std::vector<int> values = { 3,5,1,4,2 };
//	std::sort(values.begin(), values.end(),std::greater<int>()); 
//	//����������Ĭ����������,����functional std::greater<int>�ɱ�Ϊ����
//	//Ҳ������lambda�������� lambda��������true��ʾ��һ������������ǰ�棬����false��ʾ�ڶ�������������ǰ��
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