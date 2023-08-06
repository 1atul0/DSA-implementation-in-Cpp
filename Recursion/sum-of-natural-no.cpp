#include<bits/stdc++.h>
using namespace std;
long long sum(long long n){
    if(n==0)
    return 0;
    return n+sum(n-1);
}
int main(){
    long long  n;
    cout<<"enter a natural no. for sum: ";
    cin>>n;
    long long ans=sum(n);
    cout<<ans;
    return 0;
}