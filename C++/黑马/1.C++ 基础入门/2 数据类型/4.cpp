//字符型
//作用：字符型变量用于显示单个字符
//C和C++中字符型变量只占用1个字节。
//字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
#include <iostream>
using namespace std;

int main()
{
    // 1.字符型变量创建方式
    //语法：char ch = '变量'
    char ch = 'a';
    cout << ch << endl;

    // 2.字符型变量所占内存大小 (1 byet)
    cout << "charch's size is " << sizeof(ch) <<endl;

    // 3.字符型变量常见错误
    //char ch2 = "b";  //创建字符型变量时候，要用单引号
    //char ch2 = 'abcdef'; //创建字符型变量时候，单引号内只能有一个字符
 
    // 4.查看字符型变量对应ASCII编码
    // a --- 97
    // A --- 65
    cout << (int)ch << endl;

    return 0;
}