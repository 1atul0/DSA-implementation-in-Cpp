#include<bits/stdc++.h>
using namespace std;
struct  Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

/* delete head of doubly linked list*/
Node* delete_head(Node* head){
    if(head==NULL)return nullptr;
    if(head->next==NULL){
        delete head;
        return nullptr;
    }
    Node* temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
    return head;
}

// traverse whole node of circular linked list
void traverse(Node *head)
{
    if(head==NULL)return ;
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" " ;
        curr=curr->next;
    }

}

int main()
{
    int arr[]={1,5,7,2,4,4,5,36,78,90};
    Node *head = new Node(arr[0]);
    Node *curr = head;
    //insert value in linked list
    for (int i = 1; i <sizeof(arr)/sizeof(int); i++)
    {
        Node* temp = new Node(arr[i]);
        curr->next =temp;
        temp->prev=curr;
        curr = curr->next;
    }
    traverse(head);
    cout<<endl;
    Node* res=delete_head(head);
    traverse(res);
    return 0;
}
