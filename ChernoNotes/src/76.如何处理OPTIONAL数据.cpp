//C++17特性
//#include<iostream>
//#include<fstream>
//#include<optional> 如何处理可能存在也可能不存在的数据
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
//	//std::optional<std::string>用来判断是否成功读取到了文件的数据
//	std::string value = data.value_or("Not present");
//	std::cout << value << std::endl;
//	// 如果数据确实存在于std::optional中，返回对应字符串，不存在则返回Not present
//	//auto data1 = ReadFileAsString("data.txt");
//	//std::optional<int> count;
//	//int c = count.value_or(100);//如果文件存在计数值提取计数值，否则采用默认计数值
//	//if (data.has_value())  读取到数据返回true否则返回false
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
//	//	//文件为空
//	//}
//	//if (!fileOpenedSuccessfully)
//	//{
//	//	//文件为空
//	//}
//}