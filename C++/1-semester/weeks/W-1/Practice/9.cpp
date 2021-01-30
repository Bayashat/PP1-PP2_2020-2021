#include <iostream>

using namespace std;
//在输入时先写你要写几个数字(比如5)然后按ENTER，енді пробел арқылы кезкелген（5）сан жазсаң, 
//系统солардың ышынен 1-ші,3-ші,5-шісін айтЫП БЕРЕДІ 
int main()
{
    int size;
        cin>>size;
    
    int array[size];
        for( int i = 0 ; i < size ; i++)
            cin>>array[i];


        for( int i = 0 ; i < size ; i++)
            if( i % 2 == 0) 
                cout<<array[i]<<" ";
}
