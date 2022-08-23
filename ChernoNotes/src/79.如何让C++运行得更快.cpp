////多线程 std::asnyc以及future头文件
////工作线程：有些东西能够独立完成，什么时候开始什么时候结束并不重要；完成后可以得到一些反馈或者一些加载的资源，处理大量数据就要考虑了，游戏的各个场景就可以这么考虑
////1.可以利用所有的核心加载东西，即使我们需要立即装载所有东西，也会更快。
////2.加载我们需要的东西，当其他东西可用时候，将其流入，如游戏先进入游戏画面，但仍有一部分没有完成加载
////for (const auto& file : meshFilepaths)
////	m_Meshes.push_back(Mesh::Load(file));
////把上面的for并行化可以用parfor C++没有该功能
//#include<future>
//static std::mutex s_MeshesMutex;
//std::vector<std::future<void>> m_Futures;
////1、为什么不能传引用？
////线程函数的参数按值移动或复制。如果引用参数需要传递给线程函数，它必须被包装（例如使用std::ref或std::cref）
//static void LoadMesh(std::vector<Ref<Mesh>>* meshes, std::string filepath)
//{
//	auto mesh = Mesh::Load(filepath);
//
//	std::Lock_guard<std::mutex> lock(s_MeshesMutex);
//	meshes->push_back(mesh);
//}
//for (const auto& file : meshFilepaths)
//{
//	//async表示多线程，defered表示c++根据当前工作负载选择
//	/*std::async(std::Launch::async, LoadMesh, m_Meshes, file);*/
//	//async实际上返回一个std::future,必须保留，如果不保留，它将被摧毁
//	//摧毁的时候需要确保过程实际上已经完成，意味着它实际上不是并行的，因为在结束这个for循环的一次迭代中，这个函数实际上在std::future的析构函数中等待LoadMesh任务的完成
//	//如果没有返回值，那么在一次for循环之后，临时对象会被析构，而析构函数中需要等待线程结束，所以就和顺序执行一样，一个个的等下去如果将返回值赋值给外部变量，那么生存期就在for循环之外，那么对象不会被析构，也就不需要等待线程结束。*/
//	m_Futures.push_bakc(std::async(std::Launch::async, LoadMesh, &m_Meshes, file));
//	//真正做到了并行
//}