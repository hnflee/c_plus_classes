/**
 * 本节课主要介绍C++的指针和字符串
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：输入一个长度为100的字符串，以字符串数组的方式储存，再将字符串的倒序存储，输出倒序后的字符串
 *
 */

void swap(char &a,char &b){
    char t;
    t=a;
    a=b;
    b=t;
}
void work(char* str){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        swap(str[i],str[len-i-1]);
    }
}

int main(){

    char s[110];
    char *str=s;
    gets(s);
    work(str);
    printf("%s",s);

   return 0;

}