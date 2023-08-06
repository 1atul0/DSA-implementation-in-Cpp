#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int value){
    int left=0,right=n-1;
    while(left<=right){
        int mid=(right-left)/2+left;
        if(arr[mid]==value){
            return mid;
        }
        else if(arr[mid]>value){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,search_input;
    cout<<"enter no of value:";
    cin>>n;
    int arr[n];
    cout<<"enter value in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter value to be search in array:"<<endl;
    cin>>search_input;
    int index=binary_search(arr,n,search_input);
    if(index==-1){
        cout<<"element not present in array";
    }else{
        cout<<search_input<<" is present at index "<<index<<endl;
    }
    return 0;
}