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
    return 0;
}