/**
 * 本节课主要介绍C++的函数指针
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：使用函数指针调用函数的示例
 *
 */


int t(int a){
    return a;
}

int main(){

    cout << &t <<endl;
    int (*p)(int a);
    p=t;
    cout << p(5) <<","<<(*p)(5)<<endl;

   return 0;

}