#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=n;
    int y=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x-1;j++)
        {
            cout << ".";
        }
        for(int j=0;j<y;j++)
        {
            cout << "*";
        }
        for(int j=0;j<x-1;j++)
        {
            cout << ".";
        }
        x--;
        y=y+2;
        cout << endl;
    }
  
    return 0;
}