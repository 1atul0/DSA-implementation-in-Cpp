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
    int index;
    cout<<"enter index of value to be deleted: ";
    cin>>index;
    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"Now the new formated array is:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}