#include<iostream>
using namespace std;
/**
 *题目：冒泡排序算法
 */

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  for(int i=0;i<n;i++){

    for(int j=0;j<n-i-1;j++){

      if(a[j]>a[j+1]){
	int tmp=0;
	tmp=a[j];
	a[j]=a[j+1];
	a[j+1]=tmp;
      }
    }
  }

  cout << endl;
  for(int i=0;i<n;i++){
    cout<< a[i]<<" ";
  }
  cout <<endl;
  return 0;
}
