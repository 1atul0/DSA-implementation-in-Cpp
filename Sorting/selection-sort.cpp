#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }
}
int main(){
    int n;
    cout<<"enter no of value:";
    cin>>n;
    int arr[n];
    cout<<"enter value in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}