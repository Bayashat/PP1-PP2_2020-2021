/*      4.1 getline函数
        getline 语句：istream& getline (istream& is, string& str);
        is：表示一个输入流，例如cin。
        str：string类型的引用，用来存储输入流中的流信息。
    作用是： 接受一个字符串，可以接收空格并输出，需包含“#include<string>”
    若是cin 话就会在遇到括号的地方停下
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin,x);     
    cout << x << endl;

    return 0;
}