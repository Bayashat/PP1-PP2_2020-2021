// 通过给定数组里的数字们的Бөлгіштері арқылы Сорттау
#include <iostream>
#include <algorithm>
using namespace std;

int cnt(int x)  // 创建了可以输出数字的бөлгіш的函数。
{
    int res=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0) 
            res++;
    }
    return res;
}
bool f(int a,int b) // 帮助sort排序的函数。
{
    int c = cnt(a);
    int d = cnt(b);
    return c<d;
}

int main()
{
    int a[] = {11,2,43,41,5,6,17,8,9,10};
    int len = sizeof(a)/sizeof(int);        

    sort(a,a+len,f);        

    for(int i=0;i<len;i++)
    {
        cout << a[i] << "->" << cnt(a[i]) << endl;
    }

    return 0;
}
