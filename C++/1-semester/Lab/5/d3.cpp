#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s;
    cin >> s ;
    int x=0,y=(s.size())-1;
    while(x<y)
    {
        if(s[x]!=s[y])
        {
            cout << "NO";
            return 0;
        }
        x++;
        y--;
    }
    cout << "YES";
    
    return 0;
}