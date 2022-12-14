//变量允许我们命名我们存储在内存中的数据（data），继续使用它。当创建一个变量时它将被存储在内存中——两个地方：堆和栈。
//
//cherno解释变量的时候喜欢这样说：在C++中不同变量类型之间的唯一区别就是大小size（这个变量会占用多少内存）。这实际上是这些原始数据类型之间的唯一区别。
//
//数据类型的实际大小取决于编译器——不同的编译器会有不同。由编译器确定类型的大小。
//
//数据的大小（字节）：
//
//char 1，short 2，int 4，long 通常为4、具体取决于编译器，long long 通常是8
//
//可以将unsigned添加到上述常用的5个的任何一个，它会移除符号位，可以设置一个更大的数字。
//
//char传统上用于存储字符，而不仅仅是数字（当然也可以存储数字）。同样也能对其他类型存储分配字符。因此数据类型的使用仅仅取决于程序员。
//
//存小数：
//
//float 4，double 8，其实还有long double等
//
//有一个f在后面才声明这是一个浮点数：
//
//bool 1字节——因为在处理寻址内存时（addressing memory），也就是说我们需要从内存中找回我们的bool变量的值，我们没有办法去寻址只有以一个bit位的内容，我们只能寻址字节。因此我们不能创建只有一个bit位的变量，因为我们需要能够访问它，而我们现在只能访问字节。
//
//（计算机不能区分什么true和false，因此一般0表示false，而非0的一切为true）
//
//因此我们可以聪明地用一字节存8个bool意义的量，比如bitset
//
//操作符：sizeof，告诉我们是几字节的。因此sizeof(bool)就会打印出1，表示bool占用一个字节。
//
//有了这些原始数据类型，之后还能转换为指针、引用。
