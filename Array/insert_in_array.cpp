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
    cout<<"enter a value: ";
    int insert_value;
    cin>>insert_value;
    cout<<"enter index(0-n): ";
    int index;
    cin>>index;
    for(int i=n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=insert_value;
    cout<<"Now the new formated array is:"<<endl;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}