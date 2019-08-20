/**
 * 本节课主要介绍数据输入输出
 * scanf的例子
 */

#include <iostream>
#include <cstdio>

using namespace std;
int main(){

    //%s格式符的使用
    char st[40];
    scanf("%s",st);
    printf("you input is :%s \n",st);

    //%lf double类型实数
    double a;
    scanf("%lf",&a);
    printf("you input=%lf",a);

}