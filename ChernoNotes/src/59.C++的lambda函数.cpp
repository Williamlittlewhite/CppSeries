////lambda�ǲ���Ҫͨ����������Ϳ��Զ���һ�������ķ�ʽ
//#include<iostream>
//#include<vector>
//#include<functional>
////void ForEach(std::vector<int>& values, void(*func)(int))
////{
////	for (int value : values)
////		func(value);
////
////}
//void ForEach(std::vector<int>& values, const std::function<void(int)>& func) 
////д�������Ϳ������в���lambda������
//{
//	for (int value : values)
//		func(value);
//
//}
//int main()
//{
//	std::vector<int> values = { 1,5,4,2,3 };
//	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
//	std::cout << *it << std::endl;
//	/*int a = 5;
//	auto lambda = [=](int value) {std::cout << "Value: " << a << std::endl; };
//	auto lambda = [=](int value) mutable { a = 6; std::cout << "Value: " << a << std::endl; };*/
//	//[]��ʾ���񣬼���δ��ݱ�����lambda���� =��ʾͨ��ֵ�������еı��� &ͨ�����ô������б���
//	//�ǲ���lambda������ʽת��Ϊ����ָ�룬�в���lambda������
//	//lambda����������mutable���ܸı䲶�������ֵ
//	//ForEach(values,lambda); //lambda����
//	std::cin.get();
//}