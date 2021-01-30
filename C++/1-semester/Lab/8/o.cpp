#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void sortLetters()
{
    string s;
    cin >> s;
    set<char> ch;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
        ch.insert(s[i]);
    }
    cout << ch.size() << endl;
    for(set<char> :: iterator it = ch.begin();it!=ch.end();it++)
    {
        cout << *it << " ";
    }
}
int main() 
{
    sortLetters();
    return 0;
}