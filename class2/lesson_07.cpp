#include<iostream>

/**
题目：输入n个数，将n个数从小到大的顺序输出(n<=10000).
输入：
8
49 38 65 97 76 13 27 49
输出：
13 27 38 49 49 65 76 97
 */
using namespace std;
int n;

int main(){
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int temp=0;
  int loop=0;
  int min=0;
  for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
      if(a[i]>a[j]){
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
    }
  }

  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<< " ";
  }
  cout << endl;
  return 0;
}
