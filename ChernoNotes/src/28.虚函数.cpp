//1、用virtual在基类函数前面进行标记；要复写函数的时候要把基类对应函数设置为虚函数v表映射
// c++11在子类函数末尾用override进行重写标记。
//
//2、一个简单的示例：
//class Entity
//{
//	public:
//	virtual std::string GetName(){return "Entity"; }
//};
//class Player : public Entity
//{
//	private:
//	std::string m_Name;
//	public:
//	Player(const std::string name):m_Name(name){}
//	std::string GetName() override {return m_Name;}
//};
//void PrintName(Entity* entity)
//{
//	std::cout<<entity->GetName()<<std::endl;
//}
//int main()
//{
//	Player *p = new Player("ydc");
//	PrintName(p);
//	std::cin.get();
//}
//#include<iostream>
//class Entity {
//public:
//	//virtual std::string GetName() { return "Entity"; }
//	//virtual std::string GetName() = 0;//纯虚函数必须在子类实现
//	virtual std::string GetName() { return "Entity"; }
//};
//
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name):m_Name(name) { }
//	std::string GetName() override { return m_Name; }
//};
//void PrintName(Entity* p) {
//	std::cout << p->GetName() << std::endl;
//}
//int main() {
//	//Entity* e = new Entity();
//	Entity* e = new Player(" ");
//	/*std::cout << e->GetName() << std::endl;*/
//	PrintName(e);
//	Player* p = new Player("Cherno");
//	//std::cout << p->GetName() << std::endl;
//	PrintName(p);
//	std::cin.get();
//	return 0;
//}
//1、在虚函数后面加上 “ = 0 ”标志为纯虚函数，则此基类为抽象类，不能被实例化，若子类没有实现这个纯虚函数，则也不能被实例化。
//
//2、一个例子，如B继承自A，创建对象B的时候如果用A指针，则调用A的非虚函数，B的虚函数；如果用B指针，则调用B的非虚函数，B的虚函数。即调用规则：指针决定调用非虚函数，对象决定调用虚函数
//#include<iostream>
//class A
//{
//public:
//	void print()
//	{
//		std::cout << "A\n";
//	}
//	virtual void Vprint()
//	{
//		std::cout << "VA\n";
//	}
//};
//class B :public A
//{
//public:
//	void print()
//	{
//		std::cout << "B\n";
//	}
//	void Vprint() override
//	{
//		std::cout << "VB\n";
//	}
//};
//int main()
//{
//	A* ab = new B();
//	B* bb = new B();
//	ab->print();
//	bb->print();
//	ab->Vprint();
//	bb->Vprint();
//	std::cin.get();
//}