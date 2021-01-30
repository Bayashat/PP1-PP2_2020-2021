/*      string 字符串型-5 
        size， size语句 
        输出所有的字母
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x ;
    getline(cin,x);

    cout << x.size() << endl;       // 这是它总共有的字母数,   也可以写成 x.length

    for(int i =0; i < x.size(); i++)
    {
        cout << x[i] << endl;;
    }
    return 0;
}