//1��unique_ptr�����ܱ����ƣ�ʾ����
//
//std::unique_ptr<Entity> e = std::make_unique<Entity>();
//2��shared_ptr��ԭ��ʱ���ü��������Ա����ƣ�������ָ�붼�洢ĳ������ĵ�ַ��ֻ�е�����ָ�붼������ʱ���������ű�������ʾ����
//
//{
//	std::shared_ptr<Entity> e;
//	{
//		std::shared_ptr<Entity> e2 = std::make_shared<Entity>();
//		e = e2;
//	}//����������ʱ��e2���ͷţ�����entity����û���ͷţ���Ϊe��û������
//}//����������ʱ��eҲ�����٣��˴�entityҲ������