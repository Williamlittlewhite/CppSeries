//1.以VS为例，配置Configurations只是构建项目时的一系列规则而已，解决方案平台Platforms是指你编译的代码的目标平台，Win32其实和X86是一样的东西。
//
//2.项目中的每个CPP文件都会被编译，但头文件不会被编译。头文件的内容在预处理时包含进来了。
//
//3.visual studio 单独编译一个文件：ctrl + F7
//
//4.visual studio的error窗口，基本上就是分析output窗口，然后找到error这个单词，并抓取这部分信息展示出来，然后放入error list，所以建议看output窗口。
//
//5.Java里存在文件的概念，Java类名必须与文件名绑定，文件目录层次与package相关联，Java确定相应的文件存在;而C++不存在文件的概念 文件仅仅决定编译源码的方式，仅仅需要确定文件类型如.h/.cpp/.c
//
//6.Building包括编译和链接。Linker（链接）表示把所有的obj文件连接起来放到一个文件中去
//
//7.声明：这个符号、这个函数是存在的。
//
//8.定义：这个函数到底是什么。

/*#include<iostream>

void Log(const char* message);

int main() {
	Log("Hello World!");
	std::cin.get();
}*/