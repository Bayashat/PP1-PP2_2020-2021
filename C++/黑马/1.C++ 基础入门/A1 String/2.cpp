/*      2.字符串的拼接
有了 string 类，我们可以使用+或+=运算符来直接拼接字符串，非常方便

用+来拼接字符串时，运算符的两边可以都是 string 字符串，也可以是一个 string 字符串和一个C风格的字符串，
还可以是一个 string 字符串和一个字符数组，或者是一个 string 字符串和一个单独的字符。请看下面的例子：
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "first ";
    string s2 = "second ";
    char *s3 = "third ";
    char s4[] = "fourth ";
    char ch = '@';
    string s5 = s1 + s2;
    string s6 = s1 + s3;
    string s7 = s1 + s4;
    string s8 = s1 + ch;
    
    cout<<s5<<endl<<s6<<endl<<s7<<endl<<s8<<endl;
    return 0;
}
/*
运行结果：
first second
first third
first fourth
first @
*/