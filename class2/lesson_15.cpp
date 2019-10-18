#include<iostream>
using namespace std;
/**
 *题目：昆虫的繁殖问题，科学家在热带森林中发现了一种特殊的昆虫，这种昆虫的繁殖能力很强。每对成虫过X月产Y对卵，每对卵要经过2个月成长成成虫。假设每个成虫不死，第一个月只有一对成虫，且卵长成成虫的第一个月不产卵（过X月产卵），问过z月后，共有多少对？
 */

int main(){

  long long a[101]={0},b[101]={0};//a代表成虫 b代表幼虫
  
  int x,y,z;
  cin >> x >> y >>z;

  for(int i=0;i<x;i++){
    a[i]=1;
    b[i]=0;
  }

  for(int i=x;i<z+1;i++){
    b[i]=y*a[i-x];
    a[i]=a[i-1]+b[i-2];
  }

  cout<<a[z]<<endl;
  return 0;
}
