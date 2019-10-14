#include<iostream>
#include<cstring>
using namespace std;
/**
 *题目：排序算法-插入排序
 */
void mvdata(int a[],int j,int i){
  for(int k=i;k>=j;k--){
    a[k]=a[k-1];
  }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  memset(a,0,n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int tmp=0;
  for(int i=0;i<n;i++){
    tmp=a[i];
    for(int j=0;j<i;j++){
      if(tmp<a[j]){
	mvdata(a,j,i);
	a[j]=tmp;
	break;
      }
    }
  }


  for(int i=0;i<n;i++){
    cout << a[i]<<" ";
  }
  cout <<endl;
  return 0;
}

