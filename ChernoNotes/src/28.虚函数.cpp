//1����virtual�ڻ��ຯ��ǰ����б�ǣ�Ҫ��д������ʱ��Ҫ�ѻ����Ӧ��������Ϊ�麯��v��ӳ��
// c++11�����ຯ��ĩβ��override������д��ǡ�
//
//2��һ���򵥵�ʾ����
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
//	//virtual std::string GetName() = 0;//���麯������������ʵ��
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
//1�����麯��������� �� = 0 ����־Ϊ���麯������˻���Ϊ�����࣬���ܱ�ʵ������������û��ʵ��������麯������Ҳ���ܱ�ʵ������
//
//2��һ�����ӣ���B�̳���A����������B��ʱ�������Aָ�룬�����A�ķ��麯����B���麯���������Bָ�룬�����B�ķ��麯����B���麯���������ù���ָ��������÷��麯����������������麯��
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