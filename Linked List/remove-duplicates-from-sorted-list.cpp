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
//remove duplicates from sorted linked list
Node* remove_duplicates(Node* head){
    if(head==NULL || head->next==NULL)return head;
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr;
        curr=curr->next;
        while(curr!=NULL  and temp->data==curr->data){
            curr=curr->next;
        }
        temp->next=curr;
    }
    return head;
}


// traverse whole node of linked list
void traverse(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}


int main()
{
    int arr[]={1,1,2,2,2,3,4,4,5};
    Node *head = new Node(1);
    Node *curr = head;
    //insert value in linked list
    for (int i = 0; i <9; i++)
    {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    traverse(head);
    cout<<endl;
    Node* res=remove_duplicates(head);
    traverse(res);
    return 0;
}