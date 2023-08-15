#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
//for printing from  right to left with recursive
void right_rprint(Node* root){
    if(root==NULL)return;
    right_rprint(root->next);
    cout<<root->data<<" ";
}
//for printing from left to right with recursive
void left_rprint(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    left_rprint(root->next);
}
int main(){
    Node* head=new Node(1);
    Node* curr=head;
    for(int i=2;i<=10;i++){
        curr->next=new Node(i);
        curr=curr->next;
    }
    left_rprint(head);
    return 0;
}