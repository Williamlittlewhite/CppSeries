////��ֵ���е�ַ��ֵ��located value������ֵ��ʱֵ
//#include<iostream>
////int GetValue()
////{
////	return 10;
////}
////int& GetValue()  //��ֵ����
////{
////	static int value = 10;
////	return value;
////}
////void Setvalue(const int& value)//��ôдͬʱ֧����ֵ����ֵ int&valueֻ֧����ֵ
////{
////
////}
//void PrintName(const std::string& name) //����д��������ʱ����ֵ��ʵ�ʴ��ڵ���ֵ����
//{
//	std::cout << " [lvaluue] " << name << std::endl;
//}
//void PrintName(const std::string&& name) //����д��Ϊ��ֵ���ã����ܴ�����ֵ�����Դ�����ֵ,�ƶ����������
//{                                         //�����д�����ڣ���ô����ļ���д���������Ȳ��������
//	std::cout << " [rvalue] " << name << std::endl;
//}
//int main()
//{
//	//int i = 10; //��ֵ�󲿷�ʱ���ڵȺ���ߣ���ֵ���ұ�
//	////10 = i;//10û��λ�ã�������10�洢����
//	////int a = i;//��ֵ=��ֵ��ֵ
//	////int i = GetValue();//GetValue����һ����ʱ����ֵ
//	////GetValue() = 10; //��ֵ���ܸ�ֵ�����Ƿ�����ֵ���þͿ��Ը�ֵ��
//	//Setvalue(i); //��������ֵ
//	//Setvalue(10);//��������ֵ������������ʱ�򣬸���ֵ�ᱻ��������һ����ֵ
//	////���ܽ���ֵ���ð󶨵�һ����ֵ�ϣ���ֵ����ֻ������ֵ
//	////int& a = 10;  //����������ֵ����
//	//const int& a = 10;//����������������򣬱���������Ĵ洢����һ������(��ֵ)��Ȼ�������ֵ���Ǹ�����
//	std::string firstName = "Bai";
//	std::string lastName = "Zexin";
//
//	std::string fullName = firstName + lastName;
//	PrintName(fullName);//fullName����ֵ
//	PrintName(firstName + lastName); //firstName + lastName����ֵ
//	std::cin.get();
//}