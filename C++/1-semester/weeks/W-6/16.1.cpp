/*      string 字符串型-14   
        stringstream       
*/
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    stringstream s1;

    s1 << 5 << endl;
    int x;
    s1 >> x;
    cout << x*x << endl;
    
    return 0;
}