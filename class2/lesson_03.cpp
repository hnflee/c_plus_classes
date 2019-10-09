/**
 * 本节课主要介绍C++的基础算法
 * 高精度乘法
 * 题目要求：求2的n次方（n<100）
 * 输入：一个正整数n
 * 输出：2的n次方的值
 */
#include <bits/stdio.h>

using namespace std;

const int LENGTH = 10000;
int n, lc, a[LENGTH];
char al[LENGTH];

int main() {
    cin >> n;

    int i = 1;
    //第一步：初始化
    a[LENGTH - 1] = 1;
    //第二步：按位乘，满10进1
    while (i <= n) {
        int x = 0;
        for (int j = LENGTH - 1; j >= 0; j--) {
            if (((a[j]) * 2 + x) >= 10) {
                a[j] = ((a[j]) * 2 + x) % 10;
                x = 1;
            } else {
                a[j] = ((a[j]) * 2 + x) % 10;
                x = 0;
            }
        }
        i += 1;
    }

    //第三步：取结果的长度
    for (int i = 0; i < LENGTH; i++) {
        lc = LENGTH - i;
        if (a[i] != 0)break;
    }
    //第四步：将int数组的结果值转换到char数组为后面输出
    int index = 0;
    for (int i = LENGTH - lc; i < LENGTH; i++) {
        al[index] = (char) (a[i] + 48);
        index += 1;
    }
    //第五步：输出结果
    cout << endl;
    cout << al << endl;

    return 0;
}

