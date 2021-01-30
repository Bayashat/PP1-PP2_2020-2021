#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s ;

    int y = s.size()-1;
    for(int j=0;j<=y;j++)
    {
        if(s[j]!=s[y])
        {
            cout << "NO";
            return 0; 
        }
        y--;
    }
    cout << "YES" << endl;
    return 0;
}