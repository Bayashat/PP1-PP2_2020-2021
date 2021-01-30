/*      string 字符串型-6    
        substr 语句：   size_t 语句 ： 
        作用：它和 int 的区别是 它从 0 开始， 而 int 是从 -2^31 到 2^31
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x ;
    cin >> x;

    size_t start, len ;
    cin >> start >> len ;

    cout << x.substr(start,len);

    return 0;
}