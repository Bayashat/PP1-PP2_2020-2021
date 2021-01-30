#include <bits/stdc++.h>
#define ll long long
#define sep " "
using namespace std;
int f(int n)
{
    string s;
    unordered_map<string, int> mm;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        mm[s]++;
        if (mm[s]>=2){
            cout << s;
            cout << endl;
            mm[s]=-1111111;
        }
    }
    if (mm.size()==n) cout << "Understandable, have a great day";
}
int main()
{
    int n;
    cin >> n;
    f (n);
    return 0;
}