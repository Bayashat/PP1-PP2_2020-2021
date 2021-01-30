#include<iostream>
#include<string>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int a;
    string s = "";
    cin >> a;
	stringstream ss;
	ss<<a;
	ss>>s;

    while(s.length()!=4)
    {
        s = '0'+s;
    }
    if((a%4==0 && a%100 !=0)|| a%400==0)
    {
        cout << "12/09/"<< s;
    }
    else
    {
        cout << "13/09/" << s;
    }
    
    return 0;
}