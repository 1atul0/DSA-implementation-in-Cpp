#include<bits/stdc++.h>
using namespace std;
int remove_duplicates_from_sorted_array(int arr[],int n);
int remove_duplicates(int arr[],int n);
int main(){
    int n;
    cout<<"enter value of n(no. of value in array):"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"enter value in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int remaining_value=remove_duplicates_from_sorted_array(arr,n);
    int remaining_value=remove_duplicates(arr,n);
    for(int i=0;i<remaining_value;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//first way
int remove_duplicates_from_sorted_array(int arr[],int n){
    int count_duplicates=0;
   int k=0;
   int i=0;
   while(i<(n)){
        if(arr[i]==arr[i+1])
        {
            while(i!=(n-1) and  arr[i]==arr[i+1] ){
                i++;
                count_duplicates++;
            }
            
            arr[k]=arr[i];
            
            
        }
        i++;
        k++;
       
   }
   return k;

}

//second way
int remove_duplicates(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res+1;
}