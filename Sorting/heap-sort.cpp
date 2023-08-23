#include<bits/stdc++.h>
using namespace std;
/*heapify function only do , it take a index of parent node and modify parent node ,for greater 
than its child node ,recursively do for all parent node until all max element in array 
become root*/
void heapify(int arr[],int size,int index){
    int largest=index;
    int left=2*index+1,right=2*index+2;
    if(left<size and arr[left]>arr[largest]){
        largest=left;
    }
    if(right<size and arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=index){
        swap(arr[index],arr[largest]);
        heapify(arr,size,largest);
    }



}
/*buildheap does all element which is not leaf node ,modify them according to maxheap 
it means parent node must be greater than its child node 
in array there is only n/2-1 parent node present remaining leaft node*/
void buildheap(int arr[],int n){

    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
void heapsort(int arr[],int n){
   
   /*first makke all element in build heap*/
    buildheap(arr,n);
   for(int i=n-1;i>=1;i--){
        //first step- sswap firsst element to last element
        /*after build heap,max element become rootnode and last element after swapping
        so send max elemtn to last index and last element to root postion*/
        swap(arr[0],arr[i]);
        
        //call heapify for root node
        /*again call heapify for root element*/
        heapify(arr,i,0);
    }
}
int main(){
    int arr[7]={3,5,2,1,8,3,6};
    // cout<<"io"<<endl;
    int n=7;
    heapsort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
/*
first step:- make n/2-1 into for loop for buildheap for that at every parent node
max element is present compare to its child
so at a[0]=become greatest value

second step:- now for every value from n-1 to 0,swap a[0] to a[n-1] and called heapify function
which do now make root value from the remaining value
every time ,you got largest value at root node or a[0] ,and every time you decrease the 
size of array for that collection of last elements are sorted.
*/