//现在链接的主要焦点是找到每个符号和函数在哪里，并把他们连接起来。应用程序需要知道入口点（entry point，一般为main）在哪里，当你实际运行你的应用程序的时候，C++运行时库（run time library）会说：这是main函数，我要跳到这里，然后开始执行代码。
//
//在VS中按下ctrl + F7，只有编译会发生，链接将永远不会发生。但是如果是build或者是F5运行，它会编译然后链接。
//
//语法错误（syntax error）以C打头（compile），告诉我们错误在编译阶段。LNK则代表链接link，告诉我们错误在链接阶段。
//
//自定义entry point（一个exe一定有entry point）：
//
//链接错误：
//
//未解决的外部符号unresolved external symbol——当链接器找不到它需要的东西时发生。（如果从来没调用某个函数，则根本无需链接）

#include <iostream>
// include find a file called iostream, it takes the content of the iostream file and paste it here.
// include is a header
// we include iostream because we need the declaration of the function 'cin' and 'cout'
#include "7Log.h"
//pre - process statement they happen before the actual compilation
//void Log(const char* message);

//int Multiply(int a, int b) {
//	Log("Multiply");
//	return a * b;
//}

//static int Multiply(int a, int b) {
//	Log("Multiply");
//	return a * b;
//}
//int main()
//{
//	//std::cout << Multiply(5, 8) << std::endl;
//	std::cin.get();
//}
//如上，在一段程序中，如果我们在函数中调用Log，但是main中并没有调用multiply，如果log没有被链接器找到，则仍然会报错——因为multiply函数是有可能被别的翻译单元调用的！因此仍然需要进行链接。
//
//那么只要我们让multiply函数变为static的，即 static int Multiply(int a, int b)，那么这就表明这个函数只被声明在这个翻译单元中。因此即使Log函数在其他翻译单元是没有定义的，由于其只存在于Multiply中，而Multiply是static的且当前翻译单元未被调用，就表明Multiply从来没有被调用过！因此无需链接，也就不会得到任何链接错误。
//当然，重复定义，会让链接器不知道链接到哪一个函数，因此也会出错。比如在一个头文件7Log.h中定义了一个函数：而在Log.cpp和Math.cpp中都调用了Log函数并且包含了Log.h头文件（注意，头文件include仅仅是把头文件内容复制粘贴过来而已），那么由于各自为翻译单元，有两个Log函数的定义存在，链接器仍然将不知道去调用哪个函数，会出现错误
//修复措施：
//1.static
//表明头文件代码贴进来的时候，这个函数只是文件的内部函数，所以Log.cpp和Math.cpp都有他们各自的Log函数且对其他的obj文件不可见。
//2.inline
//inline的意思是获取我们实际的函数体并将函数调用替换为函数体（直接贴进去）。
//3.放到其他的翻译单元中，头文件只声明
//
//链接器需要带走我们所有的目标文件，并将它们链接在一起。它也将拉进我们可能用到的其他任何其他库，例如 C run time library、C++标准库、平台的api等等，从许多不同的地方linking是很常见的。
//
//还有其他不同的链接：静态链接和动态链接（第49节课和第50节课，动态库dll静态库lib）