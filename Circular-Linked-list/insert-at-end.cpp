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

//insert at end of circular linked list-O(n) solution
Node* insert_at_end(Node* head,int value){
    Node* temp=new Node(value);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    Node* curr=head;
    //for finding last node(i.e node which point head)
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
}

//insert at end of circular linked list -O(1) solution
Node* insert_at_end1(Node* head,int value){
    Node* temp=new Node(value);
     if(head==NULL){
        temp->next=temp;
        return temp;
    }
    temp->next=head->next;
    head->next=temp;
    swap(temp->data,head->data);
    return temp;


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
    Node* res=insert_at_end1(head,100);
    traverse(res);
    return 0;
}