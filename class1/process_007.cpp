/**
 * 本节课主要介绍C++的条件控制结构
 * if-else的例子
 *
 */

#include <iostream>
#include <cstdio>


/**
 * 题目：输入温度t的值，判断是否合适晨练（25<=t<=30，则适合晨练，否则，不合适）
 */
using namespace std;
int main(){

    int t;
    cin >> t;

    if((t>=25)&&(t<=30))      //判断是否为偶数
        cout<< "ok!"<<endl;
    else
        cout<< "no!"<<endl;

    return 0;

}