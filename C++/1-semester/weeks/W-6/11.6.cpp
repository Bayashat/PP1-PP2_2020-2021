/*      string 字符串型-13    
        find语句： 在字符串中查找字符串的位置       

        将13中的例题写成 while do 形式
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
    
    while(pos < string::npos);      //// 也可以写pos != string::npos
    {
        pos = text.find(pattern,pos);       
        if(pos != string :: npos)
        {
            cnt++;
            pos++;
        }
    }     

    cout << cnt << endl;
    return 0;
}