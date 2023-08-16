#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    /*if elementis less than pivot then 
    do i++ and swap the value of arr[i] and arr[j]*/
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
        
    }
    /*after for loop ,we have decided for correct position of that pivot element
    in sorted array which is i=i+1 so now i is correct position ,return i*/
    i++;
    swap(pivot,arr[i]);
    return i;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivot=partition(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
    }
}
int main(){
    int arr[]={3,6,4,1,3,5,6,9,8,7,6};
    int n=11;
    quick_sort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }
    return 0;
}