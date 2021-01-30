#include <iostream>
#include <string>
using namespace std;

	int main()
    {
        string s;
        cin >> s;
        int nums[10];
        for(int i=0;i<10;i++)
        {
            nums[i]=0;
        }
        for(int i=0;i<s.size();i++)
        {
            int d = s[i]-48;
            nums[d]++;
        }
        for(int i=0;i<10;i++)
        {
            if(nums[i]!=0)
            {
                cout << i << ":" << " " << nums[i] << endl;
            }
        }
		return 0;
	}