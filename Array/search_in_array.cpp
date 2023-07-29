#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n(no. of value in array):"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter value in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int find;
    bool check=false;
    cout<<"enter value to be find:"<<endl;
    cin>>find;
    for(int i=0;i<n;i++){
        if(find==arr[i]){
            cout<<"value matched at index "<<i<<endl;
            check=true;
            break;
        }
    }
    if(check==false){
        cout<<"value not found!"<<endl;
    }
    return 0;



}