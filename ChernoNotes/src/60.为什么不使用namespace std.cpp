////lambda�ǲ���Ҫͨ����������Ϳ��Զ���һ�������ķ�ʽ
//#include<iostream>
//#include<vector>
//#include<functional>
//#include<string>
//using namespace std;  //��һ������ȫ�������򣬿��Է����κ�һ��������
////����ϲ������˹����������ÿ����������ĸ��д���м䲻���пո��߻��»���
////c++ϲ��������������Сд���ʣ��м����»�������
//
//namespace apple {
//	void print(const std::string& text) {
//		std::cout << text << std::endl;
//	}
//}
//void ForEach(std::vector<int>& values, const std::function<void(int)>& func)
////д�������Ϳ������в���lambda������
//{
//	for (int value : values)
//		func(value);
//
//}
//namespace orange {
//	void print(const char* text)
//	{
//		std::string temp = text;
//		std::reverse(temp.begin(), temp.end());
//		std::cout << temp << std::endl;
//	}
//}
//using namespace apple;
//using namespace orange;
////������˵����Ϊʲô����using namespace
////��Զ��Ҫ��ͷ�ļ���using namespace��
//int main()
//{
//	print("hello");
//	/*std::vector<int> values = { 1,5,4,2,3 };
//	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
//	std::cout << *it << std::endl;
//
//	int a = 5;
//	auto lambda = [=](int value) {std::cout << "Value: " << a << std::endl; };
//	
//	ForEach(values, lambda);*/
//	std::cin.get();
//}