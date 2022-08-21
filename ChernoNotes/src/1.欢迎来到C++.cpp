//1.使用C++的最大原因是能够直接控制硬件。用C++写的代码，这些代码被送去编译器去编译，编译器将所写代码编译，链接接并输出为目标平台的机器码。机器码是你的设备在CPU上实际执行的指令。使用C++我们完全可以控制CPU执行的每一条指令。
// 
//2.C#和JAVA与cpp不同，是因为它们运行在虚拟机上，这意味着代码首先被编译成一种中间语言，当在目标平台运行应用程序时，虚拟机在程序运行时再转换成机器码。
// 
// 
//3.C++是本地语言（native language）。比如x64编译器将输出x64机器代码，从而（也只能）在64位的CPU上运行。C++编译器为目标平台和架构生成机器码，编译后已经变成了平台上的机器语言，你只需要把机器代码指令放入CPU，CPU就会执行这些指令。
// 
//4.仅仅因为代码是本地的，并不意味着它会很快，垃圾代码甚至可能比虚拟机语言更慢比如C#或JAVA，因为它们倾向于运行时做系统优化
//
