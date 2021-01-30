#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void sample11() 
{
    vector<int> v;
    int x;

    while(1)
    {
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }
    cout << *v.begin() << endl;
    cout << *v.end() << endl;
    cout << *v.rbegin() << endl;
    cout << *v.rend() << endl;
}

int main()
{
    sample11();

    return 0;
}