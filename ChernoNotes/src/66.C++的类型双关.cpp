//#include<iostream>
//struct Entity //���structΪ�գ�������һ���ֽ�����Ѱַ������б������Ϳ��Կ�Ϊ����
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
//	////double value = a;//��ʽת�� ���������ڴ��ַû����ϵ
//	////double value = (double)a; //��ʽת�� ���������ڴ��ַû����ϵ
//	////double value = *(double*)&a;//����˫�ش�int��double,����4��û�г�ʼ�����ֽڣ�������ɿ�
//	// Ҫ�����Ѿ�ӵ�е��ڴ棬������ͬ���͵��ڴ����Դ�����ĳ��������Ϊָ��ת��Ϊ�������ͣ���(double*)&a
//	//double& value = *(double*)&a;
//	//value = 0.0;//�����������õķ�ʽ��8�ֽڿռ�����д8���ֽڣ�û������
//	//std::cout << value << std::endl;
//	Entity e = { 5,8 };
//	//int x = e.x;
//	//int y = *(int*)((char*)&e + 4); //��������ô��ṹ�壬����Ƕ��ڴ��ֱ�Ӳ�����
//	//std::cout << y << std::endl;
//	//int* position = (int*) & e;
//	int* position = e.GetPositions();
//	std::cout << position[0] << "," << position[1] << std::endl; //������ô���Ԫ�أ�ţ�ư�
//	std::cin.get();
//}