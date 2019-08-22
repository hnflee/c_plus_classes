/**
 * 本节课主要介绍C++的二维数组数应用
 */

#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

/**
 * 题目：打印杨辉三角形的前10行。杨辉三角形如下图：
 *       1                     1
 *     1   1                   1  1
 *    1  2  1                  1  2  1
 *   1  3  3  1                1  3  3  1
 *  1 4  6  4  1               1  4  6  4  1
 *       图1                        图2
 *  分析：观察图1大家不容易找到规律，但是如果将其转化为图2，不难发现杨辉三角性其时就是一个二维表的小三角形部分，通过设置二维数组a
 *  存储，每行的元素个数正好等于行数，其中非首尾元素的值a[i][j]就是a[i-1][j-1]+a[i-1][j]的和
 */

int main(){


    int a[11][11];
    a[1][1]=1;
    for(int i=2;i<=10;i++){
        a[i][1]=1;
        a[i][i]=1;
        for(int j=2;j<=i-1;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i=1;i<=10;i++){
        if(i!=10) cout<<setw(30-3*i)<<" ";
        for(int j=1;j<=i;j++){
            cout<< setw(6)<<a[i][j];

        }
        cout<< endl;
    }

    return 0;

}