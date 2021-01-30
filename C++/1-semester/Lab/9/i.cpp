#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    set<string> se;
    int n;
    int a[n],x=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        pair<set<string> :: iterator, bool> ret = se.insert(s);
        if(ret.second)
        {
            a[x]=1;
            x++;
        }
        else
        {
            a[x]=0;
            x++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout << "new user added" << endl;
        }
        else
        {
            cout << "user already exists" << endl;
        }
        
    }
    return 0;
}
