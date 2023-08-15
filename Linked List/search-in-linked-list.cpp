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
// search using iterative method
bool search_in_linked_list(Node* root,int n){
    while(root!=NULL){
        if(root->data==n)return true;
        root=root->next;
    }
    return false;
}

//search using recursive method
bool recursive_search_in_linked_list(Node* root,int n){
    if(root==NULL)return false;
    else if(root->data==n)return true;
    else {

    bool ans=recursive_search_in_linked_list(root->next,n);
    return ans;
    }
    

}
int main(){
    Node* head=new Node(1);
    Node* curr=head;
    for(int i=2;i<=10;i++){
        curr->next=new Node(i);
        curr=curr->next;
    }
    // bool ans=recursive_search_in_linked_list(head,5);
    bool ans=search_in_linked_list(head,5);
    cout<<(ans==1?"true":"false")<<endl;
    return 0;
}