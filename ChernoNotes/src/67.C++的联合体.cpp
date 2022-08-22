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
//			Vector2 a, b;  //a与x,y的内存是一样的 b将是与zw相同的内存
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
//	//	union  //union一般用于类型双关
//	//	{
//	//		float a;
//	//		int b;
//	//	};
//	//};
//	//Union u;
//	//u.a = 2.0f;
//	//std::cout << u.a << "," << u.b << std::endl;  
//	////u.b实际上是取了浮点数的内存解释出来的整型，类型双关
//	Vector4 vector = { 1.0f,2.0f,3.0f,4.0f };
//	//vector.x = 2.0f; //匿名结构体可以不写结构体名进行访问
//	PrintVector2(vector.a);
//	PrintVector2(vector.b);
//	vector.z = 500.0f;
//	std::cout << "--------------------" << std::endl;
//	PrintVector2(vector.a);
//	PrintVector2(vector.b);
//	std::cin.get();
//}