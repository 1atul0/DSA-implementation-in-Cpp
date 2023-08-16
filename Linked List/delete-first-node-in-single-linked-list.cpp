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
//delete first node 
Node* delete_first_node(Node* root){
    if(root==NULL){
        return NULL;
    }
    Node* curr=root;
    root=root->next;
    delete curr;
    return root;
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
    Node* res=delete_first_node(head);
    traverse(res);
    return 0;
}