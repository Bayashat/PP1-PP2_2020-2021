/*          6.1.1 插入字符串---insert(pos,str)
insert() 函数可以在 string 字符串中指定的位置“前”插入另一个字符串，它的一种原型为：
string& insert (size_t pos, const string& str);

pos 表示要插入的位置，也就是下标 ； str 表示要插入的字符串，它可以是 string 字符串，也可以是C风格的字符串。
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2, s3;
    s1 = s2 = "1234567890";
    s3 = "aaa";

    s1.insert(5, s3);
    cout<< s1 <<endl;   // 12345aaa67890

    s2.insert(5, "bbb");
    cout<< s2 <<endl;   // 12345bbb67890

    return 0;
}

/*
insert() 函数的第一个参数有越界的可能，如果越界，则会产生运行时异常，
我们将会在《C++异常（Exception）》一章中详细讲解如何捕获这个异常。

更多 insert() 函数的原型和用法请参考：http://www.cplusplus.com/reference/string/string/insert/
*/