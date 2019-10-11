#include<iostream>
#include<cstring>
#include<cstdio>
/**
题目：高精度乘法
输入两个小于200位的正整数并求他们的积
*/
using namespace std;
int al,bl,cl,x;
const int LENGTH=399;
char a[200],b[200],c[LENGTH];
int  ai[200],bi[200],ci[LENGTH];
int main(){
  cout<<"请输入两个小于200位的正整数:"<<endl;
  gets(a);
  gets(b);



  //charArray=>intArray
  al=strlen(a);bl=strlen(b);
  for(int i=0;i<al;i++){
    ai[200-al+i]=(int)a[i]-48;
  }

  for(int i=0;i<bl;i++){
    bi[200-bl+i]=(int)b[i]-48;
  }
  cout<<endl;

  //print ai and bi
  cout <<"ai"<<endl;
  for(int i=0;i<200;i++){
    cout <<(int)ai[i];
  }
  cout << endl;
  cout <<"bi"<<endl;
  for(int i=0;i<200;i++){
    cout <<bi[i];
  }

  cout << endl;

  int c_x=0;

  for(int i=200-1;i>200-1-bl;i--){
    cout << "----------"<<endl;
    for(int j=200-1;j>200-1-al;j--){
      cout<<"i"<<i<<":"<<ai[j]<<endl;
      cout<<"j"<<j<<":"<<bi[i]<<endl;
      cout<<"x"<<j<<":"<<x<<endl;

      if((bi[i]*ai[j]+x)>=10){
	ci[i+j]+=(bi[i]*ai[j]+x)%10;
	x=(bi[i]*ai[j]+x)/10;
      }else{
	ci[i+j]+=(bi[i]*ai[j]+x)%10;
	x=0;
      }

      if(ci[i+j]+c_x>=10){
	ci[i+j]=(ci[i+j]+c_x)%10;
	c_x=1;
      }else{
	ci[i+j]=(ci[i+j]+c_x)%10;
	c_x=0;
      }

      cout<<"input ci["<<(i+j)<<"]"<<ci[i+j]<<endl;
      cout<<"input c_x:"<<c_x<<endl;


    }

  }

  cout<<"result data:"<<endl;
  bool status=0;
  for(int i=0;i<LENGTH;i++){
    if(ci[i]!=0){
      status=1;
    }
    if(status==1){
      cout<<ci[i];
    }

  }
  cout<<endl;


  return 0;
}
