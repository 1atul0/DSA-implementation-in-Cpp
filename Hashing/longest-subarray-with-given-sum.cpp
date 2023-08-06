#include<bits/stdc++.h>
using namespace std;
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int prefix_sum=0,res=0;
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++){
            prefix_sum+=A[i];
            if(prefix_sum==K)
            {
                res=i+1;
            }
            if(mp.find(prefix_sum)==mp.end()){
                mp.insert({prefix_sum,i});
            }
            if(mp.find(prefix_sum-K)!=mp.end()){
                res=max(res,i-mp[prefix_sum-K]);
            }
        }
        return res;
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
    int res=lenOfLongSubarr(arr,n,sum);
    cout<<res<<endl;
    return 0;
}