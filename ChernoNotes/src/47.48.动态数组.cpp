//#include<iostream>
//#include<vector>
//
//struct Vertex
//{
//	float x, y, z;
//	Vertex(float x, float y, float z) :x(x), y(y), z(z) { std::cout << "Build!" << std::endl; }
//	//���������ʽ���幹�캯�����򿽱����캯��������
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
//	std::vector<Vertex> vertices; //�����ʼ������ù��캯������ʵ��
//	//vertices.push_back({ 1.0f,2.0f,3.0f });//ʵ���Ͼ����ڽ��й��캯��
//	//vertices.push_back({ 4.0f,5.0f,6.0f });
//	vertices.reserve(3);//����ֻ��Ԥ���ռ�
//	//vertices.push_back(Vertex(1, 2, 3));//��main��ջ�洢���Ƶ�vertice�ռ�
//	//vertices.push_back(Vertex(4, 5, 6));
//	//vertices.push_back(Vertex(7, 8, 9));
//	vertices.emplace_back(1, 2, 3);//��vertice�ռ���ֱ�ӹ���
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