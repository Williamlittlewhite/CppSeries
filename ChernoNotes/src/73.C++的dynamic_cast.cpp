////dynamic_cast确定我们实际的类型转换，是有效的类型转换，如基类和派生类的转换，通常是基类转换为派生类就需要使用，转换失败返回null即0
//#include<iostream>
//#include<string>
//class Entity {
//public:
//	virtual void PrintName(){} //让这个类有虚函数表,变为多态类类型
//};
//class Player : public Entity {
//
//};
//class Enemy :public Entity {
//
//};
//int main()
//{
//	Player* player = new Player();
//	Entity* actuallyPlayer = player;
//	Entity* actuallyEnemy = new Enemy();
//	//Player* p = (Player*)actuallyEnemy; //必须手动保证是Player类型，因为实体类有可能是Enemy类
//	////这里的强制转换是危险的，因为e1实际上是Enemy
//	//而用dynamic_cast可以自动检测，转换需要一个多态类类型即虚函数，利用RTTI存储关于自己的信息
//	//不要关闭RTTI，这样
//	Player* p0 = dynamic_cast<Player*>(actuallyEnemy); 
//	//p0返回了0 证明把一个enemy转换成player不可行
//	if (p0)
//	{
//		//可以检查类型是什么，类似c# is 和java
//	}
//	Player* p1 = dynamic_cast<Player*>(actuallyPlayer);
//	//p1返回了非0 证明把一个player转换成player可行
//	
//}