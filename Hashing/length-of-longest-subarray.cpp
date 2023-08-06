#include<bits/stdc++.h>
using namespace std;

long long int longestSubarry(long long int A[], long long int N) {
    long long int res=0;
    for(long long int i=0;i<N;i++){
        long long int count=0;
        if(A[i]>=0){
            while(A[i]>=0 and i<N){
                count++;
                i++;
            }
        }
        res=max(count,res);
    }
    return res;
    
}
int main(){
    long long int n;
    cout<<"enter no of value:";
    cin>>n;
    
    long long int arr[n];
    cout<<"enter value in array: "<<endl;
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int res=longestSubarry(arr,n);
    cout<<res<<endl;
    return 0;
}