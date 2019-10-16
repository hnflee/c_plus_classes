#include<iostream>
#include<cstring>
using namespace std;

/*
 *题目：c++排序算法-归并排序
 */

void msort(int l,int r);
int a[]={10,4,6,3,8,2,5,7};
int tmp[8];
int main(){
  int n=8;

  msort(0,n-1);

  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

  cout<<endl;

  return 0;
}

void msort(int l,int r){
  cout<<"l:"<<l<<" r:"<<r<<endl;
  if(l==r)return;

  int mid=(l+r)/2;
  msort(l,mid);
  msort(mid+1,r);
  int i,j,k;
  i=l;j=mid+1;k=l;
  cout<<"l:"<<l<<" mid:"<<mid<<" r:"<<r<<endl;
  while(i<=mid&&j<=r){
    if(a[i]<=a[j]){
      tmp[k]=a[i];
      cout<<"tmp["<<k<<"]:"<<tmp[k]<<" ";
      i++;k++;
    }
    else{
      tmp[k]=a[j];
      cout<<"tmp["<<k<<"]:"<<tmp[k]<<" ";
      j++;k++;
    }

  }



  while(i<=mid){
    tmp[k]=a[i];
    cout<<"tmp["<<k<<"]:"<<tmp[k]<<" ";    
    i++;k++;
    
  }

  while(j<=r){
    tmp[k]=a[j];
    cout<<"tmp["<<k<<"]:"<<tmp[k]<<" ";
    j++;k++;
  }
  
  
  cout<<endl;
  for(int i=l;i<=r;i++){
    a[i]=tmp[i];
    cout<<"a["<<i<<"]:"<<a[i]<<" ";
  }
  cout<<endl;

}
