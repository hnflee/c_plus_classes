/**
 * 本节课主要介绍C++的函数的传址调用
 */

#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

/**
 * 题目：传址调用的例子
  */
void swap(int &a,int &b){
    int tmp=a;a=b;b=tmp;
}
int main(){

    int c=1,d=2;
    swap(c,d);
    cout<<c<<' '<<d<<endl;


    return 0;

}