//1、不将项目文件和解决方案文件放在一起
//
//2、将源文件放在专门的src里面
//
//3、更改 所有配置 和 所有平台 的输出目录 和 中间目录，分别为：
//
//$(SolutionDIr)\bin\$(Platform)\$(Configuration)\ 和
//
//$(SolutionDIr)\bin\intermediates\$(Platform)\$(Configuration)\
//
//于是最终生成的文件和中间文件都会按配置和平台存放在不同文件夹下面