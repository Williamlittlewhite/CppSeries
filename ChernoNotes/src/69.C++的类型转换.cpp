//#include<iostream>
//class Base
//{
//public:
//	Base() {}
//	virtual ~Base() { }
//};
//class Derived : public Base
//{
//public:
//	Derived() { }
//	~Derived() { }
//private:
//
//};
//
//class AnotherClass : public Base
//{
//public:
//	AnotherClass(){};
//	~AnotherClass(){};
//};
//
//int main()
//{
//	//double value = 5.25;
//	//int a = (int)value; //��ʽ����ת��
//	//double a = (int)value + 5.3;//C���Է����ʽ����ת��
//	//double s = static_cast<int>(value) + 5.3; 
//	//C++���Է�������ת���������κ�C���Է��ת��������������
//	//AnotherClass *s = reinterpret_cast<AnotherClass*>(&value);
//	//static_cast��̬����ת���������⣬������ͨ������ת��
//	//reinterpret_cast��������ת���ǽ��ڴ�ǿ�ƽ���Ϊ�������͵��ڴ棬����˫�ص�ת��,��valueָ�봦�����ݽ���ΪAnotherClassʵ��������
//	//const_cast�Ƴ�������ӱ�����const�޶�
//	Derived* derived = new Derived();
//	Base* base = derived; //baseʵ������Derived���һ��ʵ��
//	AnotherClass* ac = dynamic_cast<AnotherClass*>(base); 
//	if (!ac)
//		std::cout << "�����Ǹ��࣡" << std::endl;
//	Derived* ace = dynamic_cast<Derived*>(base);
//	if (ace)
//		std::cout << "���Ǹ��࣡" << std::endl;
//	//dynamic_cast�������ĳ��ָ����ָ�����Ƿ���ĳ�����ʵ���������Ƿ���0���򷵻�1
//	//std::cout << a << std::endl;
//
//}