/*      string 字符串型-17   
        copy函数-（1）
        copy //str.copy(buffer,n,0); //buffer[n] = '\0'       
*/
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    char c[5];
    c[0] = 't';
    c[1] = 'e';
    c[2] = 's';
    c[3] = 't';
    c[4] = '\0';
    
    string str(c);  // 可以这样复制

    cout << c << endl;
    cout << str << endl;
    return 0;
}