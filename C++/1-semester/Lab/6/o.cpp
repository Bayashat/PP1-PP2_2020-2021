#include <iostream>
#include<string>
using namespace std;

int Luckyticket(int n)
{
    long long sum = 0;
    while(n!=0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int x = Luckyticket(n);
    int y = n%10;
    if(x%y==0)
        cout << "Yes";
    else
    {
        cout << "No";
    }
    return 0;
}