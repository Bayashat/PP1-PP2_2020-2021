#include <iostream>

using namespace std;
//输入数字会看到效果
int main()
{
    int num;
        cin>>num;
    
    int array[num][num];

    for(int i = 0 ; i < num ; i++)
        for(int j = 0 ; j < num ; j++)
            array[i][j]=0;

    for(int i = 0 ; i < num ; i++)
        for(int j = 0 ; j < num ; j++){
            if(j+i==num-1)
                array[i][j]=1;
            else if(i+j>=num)
                array[i][j]=2;
        }


    for(int i = 0 ; i < num ; i++)
    {
        for(int j = 0 ; j < num ; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;


    }
}