#include<bits/stdc++.h>
using namespace std;
/* input arr[]={1,2,3,4,5}
   o/p arr[]={3,4,5,1,2}
*/
void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void left_rotate_by_d(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n;
    cout<<"enter value of n(no. of value in array):"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"enter value in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"enter how many position left rotate: ";
    cin>>d;
    left_rotate_by_d(arr,n,d);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}