#include <iostream>
#include <string>

using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x,y;
    cin >> x >> y;
    cout << add(x,y);
    
    return 0;
}