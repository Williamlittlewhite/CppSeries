////1.预处理阶段其实是一个文本编辑阶段，纯文本替换
//#include<iostream>
//#include<string>
//#if 0
//#define WAIT std::cin.get()
////#define Log(x) std::cout<<x<<std::endl;
////用下面这种方法的时候，要在项目配置C/C++引入宏定义  release版本不输出无用日志 debug为了调试输出
////#ifdef PR_DEBUG 最好不用这种方式 因为这种切换宏定义必须注释代码
////#define PR_DEBUG==1
//#if PR_DEBUG == 1 //这种切换只要更改上面宏定义的value即可
//#define Log(x) std::cout<<x<<std::endl;
////#else
//#elif defined(PR_RELEASE) //这么写比较推荐
//#define  Log(x)
//#endif
//
//#endif
////宏定义的跨行定义方式  \是Enter的转义，后面务必不要加空格而是直接enter
//#define MAIN int main() \
//{\
//	std::cin.get(); \
//}
//
////int main()
////{
////	//std::cin.get();
////	Log("Hello");
////	WAIT;
////}
//MAIN