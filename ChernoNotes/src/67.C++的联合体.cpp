//#include<iostream>
//struct Vector2
//{
//	float x, y;
//};
//
//struct Vector4
//{
//	//float x, y, z, w;
//	//Vector2& GetA()
//	//{
//	//	return *(Vector2*)&x;
//	//}
//	union 
//	{
//		struct 
//		{
//			float x, y, z, w;
//		};
//		struct 
//		{
//			Vector2 a, b;  //a��x,y���ڴ���һ���� b������zw��ͬ���ڴ�
//		};
//	};
//};
//
//void PrintVector2(const Vector2& vector)
//{
//	std::cout << vector.x << "," << vector.y << std::endl;
//}
//int main() 
//{
//	//struct Union
//	//{
//	//	union  //unionһ����������˫��
//	//	{
//	//		float a;
//	//		int b;
//	//	};
//	//};
//	//Union u;
//	//u.a = 2.0f;
//	//std::cout << u.a << "," << u.b << std::endl;  
//	////u.bʵ������ȡ�˸��������ڴ���ͳ��������ͣ�����˫��
//	Vector4 vector = { 1.0f,2.0f,3.0f,4.0f };
//	//vector.x = 2.0f; //�����ṹ����Բ�д�ṹ�������з���
//	PrintVector2(vector.a);
//	PrintVector2(vector.b);
//	vector.z = 500.0f;
//	std::cout << "--------------------" << std::endl;
//	PrintVector2(vector.a);
//	PrintVector2(vector.b);
//	std::cin.get();
//}