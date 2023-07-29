#include<bits/stdc++.h>
using namespace std;
/*i/p arr[]={8,5,0,10,0,20}
o/p arr[]={8,5,10,20,0,0}
*/
void move_all_zero_to_end(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=res;i<n;i++)
    {
        arr[i]=0;
    }
}
int main(){
    int n;
    cout<<"enter value of n(no. of value in array):"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"enter value in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move_all_zero_to_end(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}