#include<iostream>
#include<cstring>
using namespace std;

/**
 *题目：棋盘上A点有一个过河卒，需要走到目标B点。卒行走的规则：可以向下、或者向右。同时在棋盘上的某一点有一个对方的马（如C点），该马所在的点和所有跳跃一步可达的点称为对方马的控制点，如图3-1中的C点和P1，……，P8，卒不能通过对方马的控制点。棋盘用坐标表示，A点(0,0)、B点(n, m) (n,m为不超过20的整数),同样马的位置坐标是需要给出的，C≠A且C≠B。现在要求你计算出卒从A点能够到达B点的路径的条数。
 *输入：给出n、m和C点的坐标。
 *输出：从A点能够到达B点的路径的条数。
 *输入样例：8 6 0 4
 *输出样例：1617
 */



#include <iostream>
#include <cstdio>
using namespace std;

long long B[21][21];
int n,m,a,b;

void init()
{
  for (int i=0;i<=n;i++){ //先把所有点都赋为1，刚刚讲的特殊情况下面再考虑 
    for (int j=0;j<=m;j++){
      B[i][j]=1;
    }
  }
  if(a-2>=0&&b-1>=0)  //把马的位置和所有马能走到的位置都赋为0，注意考虑边界 
    B[a-2][b-1]=0;     
  if(a-2>=0&&b+1<=m)   
    B[a-2][b+1]=0;  
  if(a-1>=0&&b-2>=0)  
    B[a-1][b-2]=0;  
  if(a-1>=0&&b+2<=m)  
    B[a-1][b+2]=0;  
  if(a+1<=m&&b-2>=0)  
    B[a+1][b-2]=0;  
  if(a+2<=n&&b-1>=0)  
    B[a+2][b-1]=0;  
  if(a+1<=n&&b+2<=m)  
    B[a+1][b+2]=0;  
  if(a+1<=n&&b+1<=m)  
    B[a+2][b+1]=0;  
  B[a][b]=0;  
}

int main()
{
  scanf("%d%d%d%d",&n,&m,&a,&b);
  init();
  for (int i=0;i<=n;i++){
    for (int j=0;j<=m;j++){
      if (B[i][j]!=0){
	if (i==0 && j==0){
	  continue;
	}/*这里就是处理所说的特殊情况，相当于如果在最上一行或者最左一行 
                   出现一个马，那么后面的值都赋为0 
	 */ 
	else if (i==0){ 
	  B[i][j]=B[i][j-1]; 
	}else if (j==0){
	  B[i][j]=B[i-1][j];
	}else{
	  B[i][j]=B[i-1][j]+B[i][j-1];
	}
      }
    }
  }
  printf("%lld\n",B[n][m]);
}
