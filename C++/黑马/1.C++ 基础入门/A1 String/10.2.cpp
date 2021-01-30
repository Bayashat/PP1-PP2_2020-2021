/*      string 字符串型-17   
        copy函数-（2）
        copy //str.copy(buffer,n,0); //buffer[n] = '\0'       
        str.copy(str2,n,pos)          将str的n个字符从pos位置开始复制给str2
*/
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string str = "test";

    int n = str.size();
    char c[n];
    str.copy(c,n,0);    // 将str里的copy到c里，
    c[n] = '\0';

    cout << c << endl;
    cout << str << endl;
    return 0;
}