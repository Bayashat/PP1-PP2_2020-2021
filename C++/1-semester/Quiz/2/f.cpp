#include <iostream>
#include <string>
using namespace std;

	int main()
    {
        int n,m,x;
        cin >> n >> m >> x;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }

        bool has;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            has = false;
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==x)
                {
                    has = true;
                    break;
                }
            }
            if(has) cnt++;
        }
        cout << cnt;
		return 0;
	}