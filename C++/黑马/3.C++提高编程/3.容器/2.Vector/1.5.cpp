#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void printVector1(vector<int> v)        // 这里我们将输入的数字后再加一个数， 但只是复制而已，并没有影响之前的数
{
    v.push_back(12);
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
}


void sample9() 
{
    vector<int> v;
    int x;

    while(1)
    {
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }
    printVector1(v);    // 比如输入了5个数，在这儿输出成6个
    cout << endl;
    cout << v.size() << endl;   // 但在这儿输出5个，并没有影响
    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    sample9();
}