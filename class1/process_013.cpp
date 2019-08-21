/**
 * 本节课主要介绍C++的一维数组数组越界操作
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){


    int a[10];

    for(int i=0;i<20;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;

    for(int i=0;i<20;i++){
        cout<<" "<<&a[i];
    }


    return 0;

}