/*      string 字符串型-6    
        substr 语句：  size_t 语句-2： 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x ;
    cin >> x;

    size_t start;
    cin >> start ;

    cout << x.substr(start);        // 若括号里只写一个量，则计算从此数开始到后面
    
    return 0;
}