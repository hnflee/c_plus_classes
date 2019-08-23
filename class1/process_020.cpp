/**
 * 本节课主要介绍C++的无类型指针
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：无类型指针的运用举例。
 *
 */
int a=10;
double b=3.5;
void *p;
int main(){
    p=&a;
    cout<< *(int * )p<<endl;
    p=&b;
    cout<< *(double *)p<<endl;

    return 0;

}