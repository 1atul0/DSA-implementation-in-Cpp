#include<bits/stdc++.h>
using namespace std;
bool subarray_with_given_sum(int arr[],int n,int sum){
    int prefix_sum=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        if(prefix_sum==sum)return true;
        if(s.find(prefix_sum-sum)!=s.end())return true;
        s.insert(prefix_sum);
    }
    return false;
}
int main(){
    int n,sum;
    cout<<"enter no of value:";
    cin>>n;
    cout<<"enter given sum: ";
    cin>>sum;
    int arr[n];
    cout<<"enter value in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool check=subarray_with_given_sum(arr,n,sum);
    cout<<(check==true?"yes":"no")<<endl;
    return 0;
}