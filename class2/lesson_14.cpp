#include<iostream>
/**
 *题目：递推算法-斐波那契数列
 */
using namespace std;

int main(){

  int f0=1,f1=1,f2;
  int n;
  cin>>n;
  for(int i=3;i<=n;i++){
    f2=f0+f1;
    f0=f1;
    f1=f2;
  }
  cout<<"count:"<<f2<<endl;
  return 0;
}
