#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = s.size()-1;
    bool Palindromes = true;
    for(int i=0;i<x;i++)
    {
        if(s[i]!=s[x])
        {    
            Palindromes = false;
            break;
        }
        x--;
    }
    if(Palindromes) cout << "YES";
    else cout << "NO";
    
    return 0;
}