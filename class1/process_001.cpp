/**
 * 本节课主要介绍赋值语句的使用
 * class1
 */

#include <iostream>
using namespace std;
/**
 * 题目：输入两个正整数a和b，试交换a、b的值（使a的值等于b，使b的值等于a）
 * 分析：交换两个变量的值的方式有很多，我们一般采用引入第三个变量的方式，两个变量交换，可以想象成一瓶酱油和一瓶醋进行交换
 * ，这时候拿一个空瓶子过来：1）将酱油导入空瓶中  2）将醋导入原来的酱油瓶中 3）将原空瓶子的酱油导入原来的醋瓶子中。
 */
int main() {

    int a,b,c;

    cout<<"Input a,b=";//输入不同的数字用空格分开

    cin >> a>>b;

    c=a;a=b;b=c;

    cout << "a="<<a<<" b="<<b;

    return 0;
}