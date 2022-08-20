//#include"../../Engine/src/Engine.h" //这么写可能不好迁移
#include"Engine.h" //配置项目的c++输入路径,在项目写的一般用""
#include<iostream>
//namespace engine {
//	void PrintMessage();
//}

int main() {
	engine::PrintMessage();
	std::cin.get();
}