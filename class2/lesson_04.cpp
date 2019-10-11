/**
 * 本节课主要介绍C++的基础算法
 * 高精度大整数乘法
 * 题目要求：求两个不超过200位的非负整数的积
 * 输入：有两行，每行是一个不超过200位的非负整数，没有多余的前导0
 * 输出：1行，即相乘的结果。结果里面不能有多余的前导0，即如果是结果342，那么就不能输出为0342
 */
#include <bits/stdio.h>

using namespace std;

const int LENGTH = 10000;
int la, lb,lc, a[LENGTH],b[LENGTH],c[LENGTH];
char al[LENGTH],bl[LENGTH],cl[LENGTH];

int main() {
    gets(al);
    gets(bl);

    la=strlen(al);
    lb=strlen(bl);


    //第一步：将char数组转换到int数组
    for (int i = la - 1; i >= 0; i--) {
        a[LENGTH - (la - i)] = al[i] - '0';
    }
    for (int i = lb - 1; i >= 0; i--) {
        b[LENGTH - (lb - i)] = bl[i] - '0';
    }




    return 0;
}

