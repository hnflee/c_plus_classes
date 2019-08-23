/**
 * 本节课主要介绍C++的指针的+、-运算
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：输入N个整数，并使用指针变量访问输出。
 *
 */
 int a[101],n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *p = &a[0];
    for(int i=0;i<n;i++){
        printf("%d",*p);
        p++;
    }
    return 0;

}