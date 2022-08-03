//1、可直接用构造函数形参列表的同类型的常量来进行初始化，会进行隐式转换，如：
//Entity(const std::string & name) :m_Name(name) {}
//Entity(int x) :m_x(x) {}
//
//Entity e = “ydc”;
//Entity e = 2;
//若想禁止此类隐式转换，则在构造函数前面加explicit
//2、注意字符串常量"ydc"实际类型为char[]，有时被隐式转换为string，如果不能隐式转换，则强制转换std::string("ydc")