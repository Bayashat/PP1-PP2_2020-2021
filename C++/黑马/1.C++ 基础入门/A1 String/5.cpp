/*      5 size()函数
        语句：字符串名.size()
        作用：size是取字符串的长度，和length()一样. 和sizeof()不同，sizeof()是取占用的内存大小
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "ABCD";
    cout << str.size() << endl;     // 4
    cout << str.length() << endl;   // 4

    str = str + "FG";
    cout << str.size() << endl;     // 6
    cout << str.length() << endl;   // 6


    return 0;
}