//1、unique_ptr，不能被复制，示例：
//
//std::unique_ptr<Entity> e = std::make_unique<Entity>();
//2、shared_ptr，原理时引用计数，可以被复制，比如多个指针都存储某个对象的地址，只有当所有指针都被销毁时，这个对象才被析构，示例：
//
//{
//	std::shared_ptr<Entity> e;
//	{
//		std::shared_ptr<Entity> e2 = std::make_shared<Entity>();
//		e = e2;
//	}//出此作用域时，e2被释放，但是entity对象没被释放，因为e还没被销毁
//}//出此作用域时，e也被销毁，此处entity也被销毁