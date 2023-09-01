#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
//delete head of circular linked list -O(n) time
Node* delete_head(Node* head){
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    Node* curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=head->next;
   delete head;
    return curr->next;

}
/* delete head O(1) time*/
Node* delete_head1(Node* head){
     if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    Node* curr=head->next;
    head->data=curr->data;
    head->next=curr->next;
    delete curr;
    return head;
}

// traverse whole node of circular linked list
void traverse(Node *head)
{
    if(head==NULL)return ;
    cout<<head->data<<" ";
    for(Node* temp=head->next;temp!=head;temp=temp->next){
        cout<<temp->data<<" ";
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
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    curr->next=head;
    traverse(head);
    cout<<endl;
    Node* res=delete_head1(head);
    traverse(res);
    return 0;
}