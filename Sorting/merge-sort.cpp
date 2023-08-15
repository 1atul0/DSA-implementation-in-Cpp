#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    //make the array of size n1 and n2 for left-mid and mid+1 to right
    int n1=mid-left+1,n2=right-mid;
    int l[n1],r[n2];
    //putting value in left array
    for(int i=0;i<n1;i++){
        l[i]=arr[left+i];
    }
    //putting vallue in right array
    for(int i=0;i<n2;i++){
        r[i]=arr[mid+1+i];
    }
    //merging tow sorted and put value in array arr
    int i=0,j=0,k=left;
    while(i<n1 and j<n2){
        if((l[i])<=r[j]){
            arr[k]=l[i];
            i++;
            k++;
        }else{
            arr[k]=r[j];
            j++;
            k++;
        }
    }
    //if any remaining value present in "l" array
    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    //if any remaining value present in "r" array
    while(j<n2){
        arr[k]=r[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int left,int right){
    if(right>left){
        int mid=(right-left)/2+left;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
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
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}