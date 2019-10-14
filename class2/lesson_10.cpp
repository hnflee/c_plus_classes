#include<iostream>
#include<cstring>
using namespace std;

/*
 *题目：排序算法-桶排序
 */

int main(){
  int bucket[101],k;
  memset(bucket,0,sizeof(bucket));
  int n=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> k;
    bucket[k]++;
  }
  cout<<"print bucket:"<<endl;

  for(int i=0;i<101;i++){
      cout<< bucket[i] << " ";
  }
  
  cout<<endl;
  for(int i=0;i<101;i++){
    while(bucket[i]>0){
      cout<< i << " ";
      bucket[i]--;
    }
  }
  cout << endl;
  return 0;
}
