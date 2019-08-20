/**
 * 本节课主要介绍C++的条件控制结构
 * if的例子
 *
 */

#include <iostream>
#include <cstdio>


/**
 * 题目：判断是否是偶数，如果是输出 yes字符串
 */
using namespace std;
int main(){

    int a;
    cin >> a;

    if(a%2==0)      //判断是否为偶数
        cout<< "yes"<<endl;

    return 0;

}