#include<iostream>
#include<cstdio>
#include<cstring>
/**
题目：高精度计算，用高精度除以低精度。输入两个正整数，求他们的商。
 */
using namespace std;
char  a[200];
int   ai[200],c[200],b;

int   al,cl,x;

int main(){
  cout<<"输入高精度被除数以及低精度除数:"<<endl;
  gets(a);
  cin >> b;
  al=strlen(a);
  for(int i=0;i<al;i++){
    ai[i]=a[i]-'0';
  }
  
  for(int i=0;i<al;i++){
    c[i]=(x*10+ai[i])/b;
    x=(x*10+ai[i])%b;
    cl++;
  }
  cout<<endl<<"商:";
  for(int i=0;i<cl;i++){
    cout<<c[i];
  }
  cout<<endl;  
  cout<<"余数："<<x<<endl;  
  return 0;
}
