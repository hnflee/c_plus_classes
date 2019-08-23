/**
 * 本节课主要介绍C++的多重指针
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：双重指针的运用举例。
 *
 */
int a=10;
int *p;
int **pp;
int main(){
   p=&a;
   pp=&p;
   printf("%d=%d=%d",a,*p,**pp);

   return 0;

}