/*      string 字符串型-14   
        erase语句： 删除字符       
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    str.erase(0,2);

    cout << str << endl;

    return 0;
}