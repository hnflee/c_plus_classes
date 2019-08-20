/**
 * 本节课主要介绍C++的条件控制结构
 * swtich的例子
 *
 */

#include <iostream>
#include <cstdio>


/**
 * 题目：根据键盘上面输入表示星期几的数字，对应输出他的英文名称
 */
using namespace std;
int main(){

    int t;
    cin >> t;

    switch (t)
    {
        case 1:
            cout << "Monday"<<endl;
            break;
        case 2:
            cout << "Tuesday"<<endl;
            break;
        case 3:
            cout << "Wednesday"<<endl;
            break;
        case 4:
            cout << "Thursday"<<endl;
            break;
        case 5:
            cout << "Friday"<<endl;
            break;
        case 6:
            cout << "Saturday"<<endl;
            break;
        case 7:
            cout << "Sunday"<<endl;
            break;
        default:
            cout << "input Error!"<<endl;

    }

    return 0;

}