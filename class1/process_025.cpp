/**
 * 本节课主要介绍C++的函数指针数组
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：使用函数指针数组调用函数的示例
 *
 */


void t1(){cout << "test1";}
void t2(){cout << "test2";}
void t3(){cout << "test3";}
void t4(){cout << "test4";}
void t5(){cout << "test5";}

typedef void (*LP)();

int main(){

    LP a[]={t1,t2,t3,t4,t5};

    int x;
    cin >> x;

    a[x]();

   return 0;

}