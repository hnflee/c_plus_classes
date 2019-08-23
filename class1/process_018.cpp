/**
 * 本节课主要介绍C++的指针的使用1
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：输入两个不同的数字，通过指针对两个数进行相加或者相乘，并输出。
 *
 */
int main(){
    int a,b,s,t,*pa,*pb;
    pa=&a;
    pb=&b;
    a=10;b=20;
    s=*pa+*pb;
    t=*pa**pb;
    printf("a=%d,b=%d",*pa,*pb);
    cout << endl;
    printf("s=%d,t=%d",s,t);

    return 0;

}