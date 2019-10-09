/**
 * 本节课主要介绍C++的基础算法
 * 高精度减法
 * 题目要求：求两个不超过200位的非负整数的和
 * 输入：有两行，每行是一个不超过200位的非负整数，可能有多余的前导0
 * 输出：一行，即相加后的结果，结果是不含有多余的前导0，即结果为342，那么就不能输出0342
 */
#include <bits/stdio.h>

using namespace std;

int a[2000], b[2000], c[2000];
char al[2000], bl[2000], cl[2000];

int main() {
    int la, lb, lc, x = 0;
    gets(al);
    gets(bl);
    la = strlen(al);
    lb = strlen(bl);

    //第一步：将char数组转换到int数组
    for (int i = la - 1; i >= 0; i--) {
        a[2000 - (la - i)] = al[i] - '0';
    }

    for (int i = lb - 1; i >= 0; i--) {
        b[2000 - (lb - i)] = bl[i] - '0';
    }
    //第二步：进行按位加操作，满10进1
    for (int i = 2000-1; i >= 0; i--) {
        c[i] = (a[i] + b[i] + x) % 10;
        if (a[i] + b[i] + x >= 10) {
            x = 1;
        } else {
            x = 0;
        }
    }
    //第三步：取结果的长度
    for (int i = 0; i < 2000; i++) {
        lc=2000-i;
        if(c[i]!=0)break;
    }
    //第四步：将int数组的结果值转换到char数组为后面输出
    int index=0;
    for(int i=2000-lc;i<2000;i++){
        cl[index]=(char)(c[i]+48);
        index+=1;
    }
    //第五步：输出结果
    cout << endl;
    cout <<cl<<endl;

    return 0;
}

