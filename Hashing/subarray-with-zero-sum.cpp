#include<bits/stdc++.h>
using namespace std;
bool subarray_with_zero_sum(int arr[],int n){
    int prefix_sum=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        if(s.find(prefix_sum)!=s.end()){
            return true;
        }
        if(prefix_sum==0){
            return true;
        }
        s.insert(prefix_sum);
    }
    return false;

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
    bool check=subarray_with_zero_sum(arr,n);
    cout<<(check==true?"yes":"no")<<endl;
    return 0;
}