/**
 * 本节课主要介绍C++的指针和函数
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：编写一个函数，将三个整数变量排序，并将三者中最小的赋值给第一个变量，次小值赋给第二个变量，最大值赋给第三个变量
 *
 */

void swap(int *x,int  *y){
    int t=*x;
    *x=*y;
    *y=t;
}
void sort(int *x,int *y,int *z){
    if(*x>*y)swap(x,y);
    if(*x>*z)swap(x,z);
    if(*y>*z)swap(y,z);
}

int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sort(&a,&b,&c);
    printf("%d %d %d",a,b,c);

   return 0;

}