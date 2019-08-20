/**
 * 本节课主要介绍C++的循环控制结构
 * for的例子
 *
 */

#include <iostream>
#include <cstdio>


/**
 * 题目：计算从1+2+...+100的和是多少
 */
using namespace std;
int main(){

    int t=0;
    for(int i=1;i<=100;i++){
        t=t+i;
    }
    cout << t;


    return 0;

}