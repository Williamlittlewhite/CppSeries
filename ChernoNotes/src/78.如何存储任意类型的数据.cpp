////C++17�������� std::any ��Ϊ��ʵûɶ�� �����std::variant��void*
//#include<iostream>
//#include<any>
//void* operator new(size_t size)
//{
//	return malloc(size);
//}
//struct CustomClass
//{
//	std::string s0, s1; //����೬����32���ֽ�
//};
//int main()
//{
//	std::any data;
//	data = 2;
//	data = CustomClass(); //��������32���ֽڵ�ʱ����ôstd::any�����new��̬�����ڴ�
//	//data = "Cherno";
//	//data = std::string("Cherno");
//	//std::any���Դ�ȡ�κ�����
//	//std::string string = std::any_cast<std::string>(data); 
//	//���data��������Ҫת�������ͣ������׳�һ������ת�����쳣
//	std::string& string = std::any_cast<std::string&>(data);
//	//�����ñ���Ҫ��templatesҲ�������òſ���
//	std::cin.get();
//}