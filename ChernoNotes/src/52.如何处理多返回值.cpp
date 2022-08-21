//1.输入参数传引用
//2.输入参数传指针
// 
// 
// 3-5只适用于同种类型返回多个值
//3.堆上创建(new)一个数组std::string保存返回值 然后返回该数组string 用指针接受地址
//4.利用std::array储存在栈上返回更快
//5.利用std::vector储存在堆上返回更慢  

//6.利用tuple<std::string,std::string,int>  #include<utility>提供make_tuple工具
//#include<functional>提供tuple定义
//return std::make_tuple(string1,string2,int1) 返回tuple类型
//std::get<0>(sources) 取出sources这个tuple实例的第一个元素
//7.利用pair<int,int>  与上面类似 只是可以通过first和second访问
//8.用结构体返回 return{string1,string2} 可以用结构体赋值的方式返回