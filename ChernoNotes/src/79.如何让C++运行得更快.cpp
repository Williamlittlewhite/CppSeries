////���߳� std::asnyc�Լ�futureͷ�ļ�
////�����̣߳���Щ�����ܹ�������ɣ�ʲôʱ��ʼʲôʱ�����������Ҫ����ɺ���Եõ�һЩ��������һЩ���ص���Դ������������ݾ�Ҫ�����ˣ���Ϸ�ĸ��������Ϳ�����ô����
////1.�����������еĺ��ļ��ض�������ʹ������Ҫ����װ�����ж�����Ҳ����졣
////2.����������Ҫ�Ķ�������������������ʱ�򣬽������룬����Ϸ�Ƚ�����Ϸ���棬������һ����û����ɼ���
////for (const auto& file : meshFilepaths)
////	m_Meshes.push_back(Mesh::Load(file));
////�������for���л�������parfor C++û�иù���
//#include<future>
//static std::mutex s_MeshesMutex;
//std::vector<std::future<void>> m_Futures;
////1��Ϊʲô���ܴ����ã�
////�̺߳����Ĳ�����ֵ�ƶ����ơ�������ò�����Ҫ���ݸ��̺߳����������뱻��װ������ʹ��std::ref��std::cref��
//static void LoadMesh(std::vector<Ref<Mesh>>* meshes, std::string filepath)
//{
//	auto mesh = Mesh::Load(filepath);
//
//	std::Lock_guard<std::mutex> lock(s_MeshesMutex);
//	meshes->push_back(mesh);
//}
//for (const auto& file : meshFilepaths)
//{
//	//async��ʾ���̣߳�defered��ʾc++���ݵ�ǰ��������ѡ��
//	/*std::async(std::Launch::async, LoadMesh, m_Meshes, file);*/
//	//asyncʵ���Ϸ���һ��std::future,���뱣����������������������ݻ�
//	//�ݻٵ�ʱ����Ҫȷ������ʵ�����Ѿ���ɣ���ζ����ʵ���ϲ��ǲ��еģ���Ϊ�ڽ������forѭ����һ�ε����У��������ʵ������std::future�����������еȴ�LoadMesh��������
//	//���û�з���ֵ����ô��һ��forѭ��֮����ʱ����ᱻ��������������������Ҫ�ȴ��߳̽��������Ծͺ�˳��ִ��һ����һ�����ĵ���ȥ���������ֵ��ֵ���ⲿ��������ô�����ھ���forѭ��֮�⣬��ô���󲻻ᱻ������Ҳ�Ͳ���Ҫ�ȴ��߳̽�����*/
//	m_Futures.push_bakc(std::async(std::Launch::async, LoadMesh, &m_Meshes, file));
//	//���������˲���
//}