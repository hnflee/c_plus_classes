/**
 * 本节课主要介绍C++的单链表
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
 * 题目：创建单链表
 *
 */

struct Node{
    int data;
    Node *next;
};
Node *head,*p,*r;//r指向链表的当前最后一个节点，为尾指针
int x;
int main(){
    cin >> x;
    head=new Node;
    r=head;

    while(x!=-1){
        p=new Node;
        p->data=x;
        p->next=NULL;
        r->next=p;
        r=p;
        cin >> x;
    }

    p=head->next;
    while(p->next!=NULL){
        cout << p->data<<" ";
        p=p->next;
    }
    cout << p->data<<endl;
    system(" pause ");
    return 0;

}