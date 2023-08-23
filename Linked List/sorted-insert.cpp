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

//insert value in sorted linkked list
Node* sorted_insert(Node* head,int value){
    if(head==NULL)return head;
    Node* curr=head;
    //if value less than first node
    if(curr->data>=value){
        Node* newNode=new Node(value);
        newNode->next=head;
        return newNode;
    }
    //value may be in between nodes
    while( curr->next!=NULL and curr->next->data<=value){
        curr=curr->next;
    }
    Node* newNode=new Node(value);
    newNode->next=curr->next;
    curr->next=newNode;
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
    Node *head = new Node(1);
    Node *curr = head;
    //insert value in linked list
    for (int i = 2; i <= 10; i++)
    {
        curr->next = new Node(i);
        curr = curr->next;
    }
    Node* res=sorted_insert(head,1);
    traverse(res);
    return 0;
}