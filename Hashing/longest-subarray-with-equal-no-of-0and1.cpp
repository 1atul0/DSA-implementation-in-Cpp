#include<bits/stdc++.h>
using namespace std;
int maxLen(int arr[], int N)
    {
        // Your code here
        int sum=0,res=0;
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++){
            if(arr[i]==0){
                sum-=1;
            }else{
                sum+=1;
            }
            if(sum==0){
                res=i+1;
            }
            if(mp.find(sum)==mp.end()){
                mp.insert({sum,i});
            }
            if(mp.find(sum)!=mp.end())
            {
                res=max(res,i-mp[sum]);
            }
        }
        return res;
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
    int res=maxLen(arr,n);
    cout<<res<<endl;
    return 0;
}