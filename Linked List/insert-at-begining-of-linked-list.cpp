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
//insert element at begin 
Node* insert_at_begining(Node* root,int x){
    Node* curr=new Node(x);
     if(root==NULL)
        {
            return curr;
        }
    curr->next=root;
    return curr;
}

//traverse whole node of linked list
void traverse(Node* head){
        Node* curr=head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
}

int main(){
    Node* head=new Node(1);
    Node* curr=head;
    for(int i=2;i<=10;i++){
        curr->next=new Node(i);
        curr=curr->next;
    }
    Node* res=insert_at_begining(head,15);
    traverse(res);
    return 0;
}