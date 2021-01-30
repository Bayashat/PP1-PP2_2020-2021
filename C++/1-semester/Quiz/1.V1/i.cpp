#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1 = (n/3600) /24;
    int a2 = (n/3600)%24;
    int b1 = (n/60)%60 / 10 ;
    int b2 = (n/60)%60 % 10 ;
    int c1 = (n%60)/ 10 ;
    int c2 = (n%60) % 10 ;

    cout << a1 << a2 << ":" << b1 << b2 << ":" <<c1 << c2;
    return 0;
}
