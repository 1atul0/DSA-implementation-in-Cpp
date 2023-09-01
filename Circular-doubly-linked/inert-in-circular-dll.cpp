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

//insert new value at first node of circular dll
Node* insert_at_head(Node* head,int value){
    Node* temp=new Node(value);
    if(head==NULL){
        return temp;
    }
//    else if(head->next==head){
//         head->next=temp;
//         temp->prev=head;
//         temp->next=head;
//         head->prev=temp;
//         swap(head->data,temp->data);
//         return head;
//    }
//this algo also work for 1 item in linkked list
    //temp->next point to head->next;
   temp->next=head->next;
    //head->next->prev point to temp
   head->next->prev=temp;
   //head point to temp
   head->next=temp;
   //temp prev point to head
   temp->prev=head;
   //yoiu should to swap data between head and temp
   swap(head->data,temp->data);
    return head;


}

//insert new value at end node of circular dll
Node* insert_at_end(Node* head,int value){
    Node* temp=new Node(value);
    if(head==NULL)return temp;
    
    temp->next=head->next;
   head->next->prev=temp;
   head->next=temp;
   temp->prev=head;
   swap(head->data,temp->data);
   return temp;
}

//delete first node of circular dll O(1)
Node* delete_first_node(Node* head){
    if(head==nullptr)return nullptr;
    else if(head->next==head){
        delete head;
        return nullptr;
    }
    Node* temp=head->next;
    head->next=head->next->next;
    head->next->prev=head;
    swap(head->data,temp->data);
    delete temp;
    return head;

}
//delete last node of circular dll O(1)
Node* delete_last_node(Node* head){
    if(head==nullptr)return nullptr;
    else if(head->next==head){
        delete head;
        return nullptr;
    }
    Node* temp=head->prev;
    head->prev->prev->next=head;
    head->prev=head->prev->prev;
    delete temp;
    return head;
}



// traverse whole node of circular linked list
void traverse(Node *head)
{
    if(head==NULL)return ;
    Node* curr=head;
    cout<<curr->data<<" ";
    curr=curr->next;
    //while traversing if curr and head equal then terminate
    while(curr!=head){
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
    curr->next=head;
    head->prev=curr;
    traverse(head);
    cout<<endl;
    // Node* help=new Node(5);
    // help->next=help;
    // help->prev=help;
    Node* res=delete_last_node(head);
    traverse(res);
    return 0;
}
