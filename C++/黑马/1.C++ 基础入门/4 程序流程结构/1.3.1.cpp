/*  3.Switch 语句

    作用：执行多条件分支语句

    语法：
    switch(表达式)
{

	case 结果1：执行语句;break;

	case 结果2：执行语句;break;

	...

	default:执行语句;break;
}
*/
#include <iostream>
using namespace std;


int main(){
    //Switch 语句
    //给电影打分
    // 10~9 经典
    // 8~7 非常好
    // 6~5 一般
    // 5以下 烂片

    // 1. 提示用户给电影评分
    cout << "please rate the movie" << endl;
    // 2.用户开始进行打分
    int score = 0;
    cin >> score;
    cout << "your score is " << score << endl;
    // 3.根据用户输入的分数来提示用户最后的结果
    if(score>0 && score<=10)
    {
        switch(score)
        {
            case 10:
            cout << "you think that is a classic movie" << endl;
            break;   //代表退出分支，不写的话程序会继续往下跑

            case 9:
            cout << "you think that is a classic movie" << endl;
            break;

            case 8:
            cout << "you think that is a good movie" << endl;
            break;

            case 7:
            cout << "you think that is a good movie" << endl;
            break;

            case 6:
            cout << "you think that is a norm movie" << endl;
            break;

            case 5:
            cout << "you think that is a norm movie" << endl;
            break;

            default:
            cout << "you think that is a bad movie" << endl;
        }
    }
    else
    {
        cout << "again" << endl;
    }
    return 0;
} //总结：