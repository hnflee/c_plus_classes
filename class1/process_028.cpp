/**
 * 本节课主要介绍C++的循环链表应用
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：有M个人，其编号分别为1-M.这M这个人按照顺序排列成一个圈。现在给定一个数N，从第一个人开始报数，
 * 数到N的人出列，然后又从一下一个人开始从1报数，数到N的人出列，如此循环，直到最后一个人出列为止。
 *
 */

struct Node{
    long d;
    Node *next;
};
long m,n;
Node *head,*p,*r;//r指向链表的当前最后一个节点，为尾指针
int x;
int main(){
    long i,j,k,l;
    cin >>n>>m;//n 人数 m 跳过
    head=new Node;
    head->d=1;
    head->next=NULL;
    r=head;
    for(i=2;i<=n;i++){
        p=new Node;
        p->d=i;
        p->next=NULL;
        r->next=p;
        r=p;
    }
    r->next=head;
    r=head;
    for(i=1;i<=n;i++){
        for(j=0;j<m-2;j++)r=r->next;
        cout << r->next->d <<" ";
        r->next=r->next->next;
        r=r->next;
    }

    return 0;

}