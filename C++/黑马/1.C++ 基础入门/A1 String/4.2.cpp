/*      4.2.getline 函数  
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin,x);
    
    cout << x[0] << endl;       // 只输出第一个字母
    cout << int(x[0]) << endl;  // 将那个字母转成整数
    return 0;
}