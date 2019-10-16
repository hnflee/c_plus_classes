#include<iostream>

using namespace std;
/**
 *题目：排序算法-快速排序c++代码
 *author：wyyhzc
 */

void qsort(int a[],int l,int r){
  int i,j,mid,p;
  i=l;j=r;
  mid=a[(l+r)/2];
  cout<<"l:"<<l<<" r:"<<r<<endl;
  do{
    while(a[i]<mid)i++;
    while(a[j]>mid)j--;
    if(i<=j){

      cout<<"a["<<i<<"]:"<<a[i]<<" ";
      cout<<"a["<<j<<"]:"<<a[j]<<" ";
      p=a[i];
      a[i]=a[j];
      a[j]=p;
      i++;j--;


    }


  }while(i<=j);
  cout<<endl;
  if(l<j)qsort(a,l,j);
  if(i<r)qsort(a,i,r);

  

}

int main(){
  int n=10;
  int a[]={20,40,32,67,40,20,89,300,400,15};
  cout<<"排序前的数组："<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;

  qsort(a,0,9);

  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;


  return 0;
}
