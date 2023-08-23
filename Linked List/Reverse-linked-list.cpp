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

/*
1 method:- put all element in array then pick item from back and put in another list

*/
//2nd method:- using helping linked list and iterative
Node* reverse(Node* head){
    if(head==NULL || head->next==NULL)return head;
    Node* curr=head;
    Node* prev=nullptr;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

/*3rd method :- helping linkked list and recursive*/
Node* rec_reverse(Node* head,Node* prev){
    if(head==NULL)return prev;
    Node* next=head->next;
    head->next=prev;
    return rec_reverse(next,head);
}

/*4th method:- using head recursion*/
Node* reverse4(Node* head){
    if(head==NULL)return NULL;
    if(head->next==NULL)return head;
    Node* rest_head=reverse4(head->next);
    Node* rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
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
    Node *head = new Node(1);
    Node *curr = head;
    //insert value in linked list
    for (int i = 2; i <= 10; i++)
    {
        curr->next = new Node(i);
        curr = curr->next;
    }
    traverse(head);
    cout<<endl;
    Node* res=reverse(head);
    traverse(res);
    return 0;
}