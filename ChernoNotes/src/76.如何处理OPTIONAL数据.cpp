//C++17����
//#include<iostream>
//#include<fstream>
//#include<optional> ��δ�����ܴ���Ҳ���ܲ����ڵ�����
////std::string ReadFileAsString(const std::string& filepath, bool outSuccess)
////{
////	std::ifstream stream(filepath);
////	if (stream)
////	{
////		std::string result;
////		//read file
////		stream.close();
////		outSuccess = true;
////		return result;
////	}
////	outSuccess = false;
////	return std::string();
////}
//std::optional<std::string> ReadFileAsString(const std::string& filepath)
//{
//	std::ifstream stream(filepath);
//	if (stream)
//	{
//		std::string result;
//		//read file
//		stream.close();
//		return result;
//	}
//	return {};
//}
//
//int main()
//{
//	/*bool fileOpenedSuccessfully=false;
//	std::string data = ReadFileAsString("data.txt",fileOpenedSuccessfully);*/
//	std::optional<std::string> data = ReadFileAsString("data.txt"); 
//	//std::optional<std::string>�����ж��Ƿ�ɹ���ȡ�����ļ�������
//	std::string value = data.value_or("Not present");
//	std::cout << value << std::endl;
//	// �������ȷʵ������std::optional�У����ض�Ӧ�ַ������������򷵻�Not present
//	//auto data1 = ReadFileAsString("data.txt");
//	//std::optional<int> count;
//	//int c = count.value_or(100);//����ļ����ڼ���ֵ��ȡ����ֵ���������Ĭ�ϼ���ֵ
//	//if (data.has_value())  ��ȡ�����ݷ���true���򷵻�false
//	if(data)
//	{
//		std::string& s = *data;
//		std::cout << "file read successfully!\n";
//	}
//	else
//	{
//		
//		//data.value();
//		std::cout << "File could not be opened!\n";
//	}
//	std::cin.get();
//	//if (data == "")
//	//{
//	//	//�ļ�Ϊ��
//	//}
//	//if (!fileOpenedSuccessfully)
//	//{
//	//	//�ļ�Ϊ��
//	//}
//}