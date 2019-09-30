/**
 * 本节课主要介绍C++的结构体指针的运用举例
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：使用函数指针数组调用函数的示例
 *
 */


struct student{
    char name[20];
    char sex;
    int score;
}s[3]={{"xiaoming",'f',356},{"xiaoliang",'f',350}
,{"xiaohong",'m',0}};
int main(){

    student *p;
    printf("Name      Sex     Score \n");
    for(p=s;p<s+3;p++){
        printf("%-9s%3c%7d\n",p->name,p->sex,p->score);
    }

   return 0;

}