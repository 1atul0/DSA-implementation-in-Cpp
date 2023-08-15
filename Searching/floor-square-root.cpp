#include<bits/stdc++.h>
using namespace std;
int floor_sqrt(int n){
    int left=0,right=n;
    while(left<=right){
        int mid=(right-left)/2+left;
        if(mid*mid<=n and (mid+1)*(mid+1)>n){
            return mid;
        }
        else if(mid*mid>n){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter vallue for square root: ";
    cin>>n;
    int sqrt=floor_sqrt(n);
    cout<<"sqrt without sqrt function: "<<sqrt<<endl;
}