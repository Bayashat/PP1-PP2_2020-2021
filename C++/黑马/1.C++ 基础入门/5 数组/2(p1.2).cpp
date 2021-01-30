// 也可以这么写：
#include <iostream>
using namespace std;
#include <string>

int main()
{
    int a[3][3] = 
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };

    string names[3] = { "zhang","li","wang" };

    for(int i = 0; i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
            sum += a[i][j];
            //cout << a[i][j] << " ";
        }
        cout << names[i] << "'s total score is: "<< sum << endl;
    }
    return 0;
}