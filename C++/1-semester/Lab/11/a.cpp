#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
	string s[7];
	s[0] = "SUN";
	s[1] = "MON";
	s[2] = "TUE";
	s[3] = "WED";
	s[4] =  "THU"; 
	s[5] = "FRI";
	s[6] = "SAT"; 
	string ss;
	cin >> ss;
	for(int i=0;i<7;i++)
	{
		if(s[i]==ss)
		{
			cout << 7-i;
		}
	}
    return 0;
}