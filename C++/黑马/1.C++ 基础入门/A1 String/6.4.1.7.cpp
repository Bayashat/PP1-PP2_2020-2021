/*       6.4.1.7 字符串查找 - find函数--.find(str,pos)  
        find语句： 在字符串中查找字符串的位置       

        将6.4.1.6中的例题写成 while do 形式.2
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text , pattern;
    cin >> text >> pattern;

    int cnt = 0;
    size_t pos =0;
    
    while((pos = text.find(pattern,pos)) < string::npos);      //// 也可以写pos != string::npos
    {
        cnt++;
        pos++;
    }     

    cout << cnt << endl;
    return 0;
}