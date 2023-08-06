#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> frequency_of_array_element(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    return m;
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
    unordered_map<int,int>m=frequency_of_array_element(arr,n);
    cout<<"frequency is : "<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}