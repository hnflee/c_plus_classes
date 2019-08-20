/**
 * 本节课主要介绍C++的循环控制结构
 * while的例子
 *
 */

#include <iostream>
#include <cstdio>


/**
 * 题目：计算从1+2+...+n，当加到第几项的时候和会超过1000
 */
using namespace std;
int main(){

    int n=0,s=0;

    while(s<=1000){
        ++n;
        s+=n;

    }

    cout<< n;
    return 0;

}