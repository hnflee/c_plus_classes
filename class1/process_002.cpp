/**
 * 本节课主要介绍赋值语句的使用
 * class1
 */
#include <cstdio>
using namespace std;
/**
 * 题目：计算圆柱体的表面积
 * 分析：圆柱体的由3部分组成，上底面积+下底面积+侧面积。
 * 根据小学数学公式可以得出 圆柱体表面积=底面积*2+2πrh
 */
int main(){
    const double pi=3.1415926;
    double r,h,s1,s2,s;
    scanf("%lf%lf",&r,&h);//r和h前的&不可以去掉，double类型用 %lf
    s1=pi*r*r;
    s2=2*pi*r*h;
    s=2*s1+s2;

    printf("Area=%0.3lf",s);

    return 0;
}