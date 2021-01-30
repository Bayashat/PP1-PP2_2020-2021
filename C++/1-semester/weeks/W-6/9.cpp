/*      string 字符串型-9    
         substr 语句
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstname, lastname;
    cin >> firstname >> lastname;

    cout << lastname.substr(0,1) << "." << firstname.substr(0,1) << "." << endl;
    cout << lastname[0] << "." << firstname[0] << "." << endl;
    
    return 0;
}