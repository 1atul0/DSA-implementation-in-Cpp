#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int size)
    {
        sort(a,a+size);
        int res=-1;
        for(int i=0;i<size;i++){
            int count=1;
            if(a[i]==a[i+1]){
                while(a[i]==a[i+1]){
                    i++;
                    count++;
                }
            }
            if(count>(size/2)){
                return a[i];
            }
        }
        return -1;
        // your code here
        
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
    int ans=majorityElement(arr,n);
    cout<<ans<<endl;
    return 0;
}