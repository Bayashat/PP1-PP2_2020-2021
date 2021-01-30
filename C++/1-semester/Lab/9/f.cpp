// Lab 9 problem F
#include <bits/stdc++.h>
#define ll long long
#define sep " "
using namespace std;
int main()
{
    string s;
    stack <char> st;
    cin >> s;
    for (int i=0; i < s.size(); i++)
    {
        if (s[i]=='(') 
        {
            st.push('(');
        }
        else
        {
            if (st.size()==0)
            { 
                cout << "NO" << endl;
                return 0;
            }
            else
            {
                if (st.top()==')'){
                    cout << "NO\n";
                }
                else 
                {
                    st.pop();
                }
            }
        }
    }
    if(st.size() == 0)
    cout << "YES\n";
    else
    cout << "NO\n";return 0;

}