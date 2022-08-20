#include"Engine.h"
#include<iostream>
namespace engine {
	void PrintMessage() {
		std::cout << "Hello World!" << std::endl;
	}
}
//生成的lib在总体项目文件的debug目录里
//理论上要在link的输入链接静态库，
// 但是如果是在总项目下新建的解决方案那么可以在
//game项目里添加引用即可，并且在构建时候相当于确定了makefile的顺序