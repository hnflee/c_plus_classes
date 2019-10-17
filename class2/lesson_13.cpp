#include<iostream>
#include<cstring>
using namespace std;

/*
 *题目：c++排序算法-利用归并排序求解逆序对
 */

void msort(int a[],int tmp[],int l,int r);

int count=0;
int main(){
  int a[]={10,4,6,3,8,2,5,7};

  int n=sizeof(a)/sizeof(a[0]);
  int tmp[n];
  memset(tmp,0,n);


  
  msort(a,tmp,0,n-1);
  
  cout<<endl;

  cout<<"count:"<<count<<endl;

  return 0;
}

void msort(int a[],int tmp[],int l,int r){
  cout<<"l:"<<l<<" r:"<<r<<endl;
  if(l==r)return;

  int mid=(l+r)/2;
  msort(a,tmp,l,mid);
  msort(a,tmp,mid+1,r);
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
      count+=mid-(i-1);
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
