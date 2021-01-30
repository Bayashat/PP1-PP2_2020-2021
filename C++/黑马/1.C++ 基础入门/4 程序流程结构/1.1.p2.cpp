/* 1.p  案例题
**练习案例：** 三只小猪称体重

有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？
*/
#include <iostream>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cout << "a= " << endl;
    cin >> a;

     cout << "b= " << endl;
    cin >> b;

     cout << "c= " << endl;
    cin >> c;

    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;

    
    if(b=c)
    {
        if(a>b)
        {
            cout << "The heaviest is a" << endl;
        }
        else if(b>a) 
        {
            cout << "The heaviest is b and c" << endl;
        }
        else 
        {
            cout << "SAME" << endl;
        }

    }
    else if(a=c)
    {
        if(b>a)
        {
            cout << "The heaviest is b" << endl;
        }
        else if(a>b) 
        {
            cout << "The heaviest is a and c" << endl;
        }
        else 
        {
            cout << "SAME" << endl;
        }
    }
    else if(a=b)
    {
        if(c>a)
        {
            cout << "c" << endl;
        }
        else 
        {
            cout << "The heaviest isa and b" << endl;
        }
    }
    else if(a>b)
    {
        if(a>c)
        {
            cout << "The heaviest is a " << endl;
        }
        else 
        {
            cout << "The heaviest is c " << endl;
        }
    }
    else 
    {
        if(b>c)
        {
            cout << "The heaviest is b " << endl;
        }
        else 
        {
            cout << "The heaviest is c " << endl;
        }
    }
    return 0;
}