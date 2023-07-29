#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"enter value of n(no. of value in array):"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"enter value in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    //logic for reversing swap first with last and increase first index and decrease last index;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}