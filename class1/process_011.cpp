/**
 * 本节课主要介绍C++的循环控制结构
 * do-while的例子
 *
 */

#include <iostream>
#include <cstdio>


/**
 * 题目：学校体操队到操场集合，排成每行2人，最后多出1人，排成每行3人，会多出1人，分别每行排4、5、6人都多出1人，排成每行7人的时候，正好。
 * 求体操队多少人？
 */
using namespace std;
int main(){

    int x=0;
    bool yes;
    do{
        yes=true;
        x+=7;
        if(x%2!=1) yes=false;
        if(x%3!=1) yes=false;
        if(x%4!=1 or x%5!=1 or x%6!=1) yes=false;


    }while(yes==false);

        cout << "All="<<x;
    return 0;

    return 0;

}