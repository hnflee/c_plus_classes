/**
 * 本节课主要介绍C++的结构体
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


struct student{
    string name;
    int age;

};
/**
 * 题目：定义student结构体，然后定义初始化变量，找出年龄最大的学生
 *
 */
int main(){
    const int count=2;
    student a[count];
    for(int i=0;i<count;i++){
        cout << "请输入第"<<i+1<<"学生的信息"<<endl;
        cin  >> a[i].name >> a[i].age;
    }

    student max={"xx",-1};//注意需要初始化，否则age会使随机数

    for(int i=0;i<count;i++){
        if(max.age<a[i].age){
            max.age=a[i].age;
            max.name=a[i].name;
        }
    }

    cout<< "年龄最大的学生："<<max.name<<" "<<max.age;

    return 0;

}