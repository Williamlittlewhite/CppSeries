//#include<iostream>
//#include<vector>
//
//struct Vertex
//{
//	float x, y, z;
//	Vertex(float x, float y, float z) :x(x), y(y), z(z) { std::cout << "Build!" << std::endl; }
//	//这里必须显式定义构造函数否则拷贝构造函数不工作
//	Vertex(const Vertex& vertex)
//		:x(vertex.x), y(vertex.y), z(vertex.z) 
//	{
//		std::cout << "Copyied" << std::endl;
//	}
//};
//
//std::ostream& operator<< (std::ostream& stream,const Vertex& vertex)  {
//	stream << vertex.x << "," << vertex.y << "," << vertex.z;
//	return stream;
//}
//
//int main() {
//	//Vertex vertices = new Vertex[5];
//	std::vector<Vertex> vertices; //这里初始化会调用构造函数构造实例
//	//vertices.push_back({ 1.0f,2.0f,3.0f });//实质上就是在进行构造函数
//	//vertices.push_back({ 4.0f,5.0f,6.0f });
//	vertices.reserve(3);//这里只是预留空间
//	//vertices.push_back(Vertex(1, 2, 3));//在main的栈存储后复制到vertice空间
//	//vertices.push_back(Vertex(4, 5, 6));
//	//vertices.push_back(Vertex(7, 8, 9));
//	vertices.emplace_back(1, 2, 3);//在vertice空间上直接构造
//	vertices.emplace_back(4, 5, 6);
//	vertices.emplace_back(7, 8, 9);
//	//for (int i = 0; i < vertices.size(); i++) {
//	//	std::cout << vertices[i] << std::endl;
//	//}
//	//vertices.erase(vertices.begin() + 1);
//	//for (Vertex& vertex: vertices)
//	//	std:: cout << vertex << std::endl;
//	std::cin.get();
//	
//	return 0;
//}