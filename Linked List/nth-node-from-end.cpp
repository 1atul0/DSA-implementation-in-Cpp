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

int nth_node_from_end(Node* head,int n){
    if(head==NULL)return -1;
    Node* slow=head;
    Node* fast=head;
    //run loop for n-times
    while(n>0){
        if(fast==NULL)return -1;
        fast=fast->next;
        n--;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;

    }
    return slow->data;

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
    cout<<nth_node_from_end(head,0)<<endl;
    // traverse(res);
    return 0;
}