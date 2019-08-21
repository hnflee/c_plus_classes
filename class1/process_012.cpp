/**
 * 本节课主要介绍C++的一维数组初始化样
 */

#include <iostream>
#include <cstdio>

using namespace std;
int a[10];
int main(){
    int b[10];
    int c[10]={1,2,3};
    cout <<"a[10] ";
    for(int i=0;i<10;i++){
       cout<<" "<<a[i];
    }
    cout <<endl;
    cout <<"b[10] "<<endl;
    for(int i=0;i<10;i++){
        cout<<" "<<b[i];
    }
    cout <<endl;
    cout <<"c[10] "<<endl;
    for(int i=0;i<10;i++){
        cout<<" "<<c[i];
    }

    return 0;

}