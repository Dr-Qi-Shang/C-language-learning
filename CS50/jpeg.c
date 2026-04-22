/*这行代码的意思是：

`FILE *file = fopen(argv[1], "r");`

1. `argv[1]`  
表示第 1 个命令行参数（第 0 个是程序名）。  
通常这里放“你要打开的文件名”。

2. `fopen(argv[1], "r")`  
按只读模式打开这个文件。  
`"r"` = read，只读；文件必须存在。

3. `FILE *file = ...`  
把打开后的文件句柄（指针）保存到 `file` 变量，后续用它读取内容。  
如果打开失败，`file` 会是 `NULL`。

举例：如果你运行  
`jpeg.exe cat.jpg`  （jpeg是图片类型）
那么：
1. `argv[0]` 是 `jpeg.exe`
2. `argv[1]` 是 `cat.jpg`  
所以代码等价于打开 `cat.jpg` 进行读取。
*/
#include<stdio.h>

int main(int argc,char *argv[])
{
    //Ensure user ran program with two words at prompt
    if(argc!=2)
    {
        return 1;
    }

    //Open file
    FILE *file=fopen(argv[1],"r");
    if(file==NULL)
    {
        return 1;
    }

    //read 3 bytes from file
    unsigned char bytes[3];//char 表示元素类型是字符型（1 个元素通常占 1 字节）
    fread(bytes,3,1,file);
    
    //Check if bytes are 0xff 0xd8 0xff
    /*
    1.这是 JPEG 文件开头的标志字节（文件签名的一部分）。
    2.如果匹配，说明这个文件很可能是 JPEG。
    3.如果不匹配，说明不是 JPEG（或文件损坏/不是标准开头）。
    */
   if(bytes[0]==0xff && bytes[1]==0xd8 && bytes[2]==0xff)
   {
       printf("Maybe\n");
   }
   else
   {
       printf("No\n");
   }
}
/*
我按“声明、打开、使用、关闭”四步来讲，这样你能从头看清 file 到底是什么。从头看，你代码里的 file 本质是“文件流指针变量”。

1. 在 C 里，FILE 是标准库定义的一种类型，用来描述一个已打开文件的运行状态。  
2. FILE *file 里的星号表示“指针”，所以 file 是一个指向 FILE 对象的指针变量。  
3. 执行 fopen 之后：  
4. 打开成功，file 里存的是一个有效地址，指向库内部的文件流对象。  
5. 打开失败，file 会是 NULL。  
6. 这个文件流对象里有很多信息，比如当前读写位置、缓冲区、打开模式、错误标记。  
7. 后续 fread、fscanf、fprintf、fclose 这些函数，都是靠 file 来知道“你要操作哪个文件”。  
8. 所以 file 不是文件内容本身，也不是文件名字符串，而是“操作这个文件的句柄/入口”。  

一句话总结：file 是程序里连接“磁盘文件”和“读写函数”的桥梁。
*/