//     例题 4  找a的n次方
#include <iostream>
using namespace std;
 
int degree(int a, int n)
{
    if(n==0) return 1;
    return degree(a,n-1)*a;
}
 
int  main()
{
    int x, y;
    cin >> x >> y;
    cout << degree(x,y);
    return 0;
}