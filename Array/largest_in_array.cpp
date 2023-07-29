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
    int largest=0;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
    }
    cout<<"largest no. in array is: "<<largest<<endl;
    return 0;
}