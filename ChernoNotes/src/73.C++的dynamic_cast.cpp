////dynamic_castȷ������ʵ�ʵ�����ת��������Ч������ת�����������������ת����ͨ���ǻ���ת��Ϊ���������Ҫʹ�ã�ת��ʧ�ܷ���null��0
//#include<iostream>
//#include<string>
//class Entity {
//public:
//	virtual void PrintName(){} //����������麯����,��Ϊ��̬������
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
//	//Player* p = (Player*)actuallyEnemy; //�����ֶ���֤��Player���ͣ���Ϊʵ�����п�����Enemy��
//	////�����ǿ��ת����Σ�յģ���Ϊe1ʵ������Enemy
//	//����dynamic_cast�����Զ���⣬ת����Ҫһ����̬�����ͼ��麯��������RTTI�洢�����Լ�����Ϣ
//	//��Ҫ�ر�RTTI������
//	Player* p0 = dynamic_cast<Player*>(actuallyEnemy); 
//	//p0������0 ֤����һ��enemyת����player������
//	if (p0)
//	{
//		//���Լ��������ʲô������c# is ��java
//	}
//	Player* p1 = dynamic_cast<Player*>(actuallyPlayer);
//	//p1�����˷�0 ֤����һ��playerת����player����
//	
//}