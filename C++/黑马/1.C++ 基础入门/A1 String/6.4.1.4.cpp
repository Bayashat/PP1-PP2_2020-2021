/*       6.4.1.4 字符串查找 - find函数--.find(str,pos)  

        find语句： 在字符串中查找字符串的位置       

        将6.4.1.3中的例题简化
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
    
    for(;;)
    {
        pos = text.find(pattern,pos);       
        if(pos != string :: npos)
        {
            cnt++;
            pos++;
        }
        else
        {
            break;
        }
        
    }
    
    cout << cnt << endl;
    return 0;
}