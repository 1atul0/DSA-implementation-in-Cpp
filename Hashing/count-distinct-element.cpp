#include<bits/stdc++.h>
using namespace std;
int count_distinct(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
        }
    }
    return s.size();
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
    int res=count_distinct(arr,n);
    cout<<res<<endl;
    return 0;
}