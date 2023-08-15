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
Node* insert_at_begining(Node* root,int x){

}

int main(){
    Node* head=new Node(1);
    Node* curr=head;
    for(int i=2;i<=10;i++){
        curr->next=new Node(i);
        curr=curr->next;
    }
    
    return 0;
}