#include <bits/stdc++.h>
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
// delete first node
Node* insert_at_given_position(Node *root,int pos,int data)
{   
   if(root==NULL)
   return root;
   if(pos==1){
    Node* temp=new Node(data);
    temp->next=root;
    return temp;
   }
   Node* curr=root;
  for(int i=2;i<pos;i++){
    curr=curr->next;
    if(curr==NULL)return root;
  }
  Node* temp=new Node(data);
  temp->next=curr->next;
  curr->next=temp;
  return root;

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
    Node *res = insert_at_given_position(head,11,67);
    traverse(res);
    return 0;
}