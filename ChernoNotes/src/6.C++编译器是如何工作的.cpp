//1.C++编译器实际上需要做的唯一一件事，就是将我们的文本文件拿来转换他们，转换成一种称为目标文件格式的中间格式(.obj)。这些obj文件可以传递到链接器，这个链接器可以做它所有的要链接的事情。
//
//2.编译器在生成这些obj时实际上做了几件事：
//首先，预处理我们的代码，这意味着所有的预处理语句都会先处理。一旦我们的代码被预处理，接下来我们将或多或少地进行记号化和解析，基本上整理成编译器能够真正理解和推理的格式。这基本上导致了所谓的抽象语法树被创建。它基本上是我们代码的一种表示，但是是抽象的语法树。一旦编译器创建了抽象语法树，它可以开始实际生成代码。这段代码就是实际的机器，我们的CPU，将执行的代码。
//我们还得到了其他各种数据，比如一个存储所有常量、变量的地方，这基本上就是编译器所做的一切。
//
//3.每一个CPP文件将产生一个目标文件，这些目标文件被称为翻译单元。本质上必须意识到C++不关心文件，文件不是存在于C++中的东西。在C++中，文件只是提供给编译器源代码的一种方式，你负责告诉编译器你输入的是什么类型的文件，以及编译器应该如何处理它。比如说把a.cpp改为b.hbh，只要告诉编译器这是个c++文件亦可，所以文件是没有意义的。
//4.
//But if you produce a preprocessing file, it won't compile, it won't produce an object file, so disable it to build your file
