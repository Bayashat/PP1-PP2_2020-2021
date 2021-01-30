/*         6.3.1 提取子字符串---substr函数---.substr(pos,npos)
substr() 函数用于从 string 字符串中提取子字符串，它的原型为：
string substr (size_t pos = 0, size_t len = npos) const;

pos 为要提取的子字符串的起始下标，len 为要提取的子字符串的长度。

语句 ： 字符串名.substr(num1,num2) 
        .substr(num1,num2)----：提取从num1后的num2个字符 的字符串
        .substr(num) ----： 若括号里至写一个数字，则代表从此数字开始提取到最后
        作用：提取指定的子字符串
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "first second third";
    string s2;
    s2 = s1.substr(6, 6);   // second
    cout<< s1 <<endl;
    cout<< s2 <<endl;

    // 
    string str = "ABCD" ;

    cout << str.substr(2);    // 从第2个位置开始提取子字符串
    return 0;
}

/*
运行结果：
first second third
second
D

系统对 substr() 参数的处理和 erase() 类似：
如果 pos 越界，会抛出异常；
如果 len 越界，会提取从 pos 到字符串结尾处的所有字符。
*/