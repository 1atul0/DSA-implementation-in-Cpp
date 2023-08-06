/*678=21
67= 13*/
#include<bits/stdc++.h>
using namespace std;

int sum_of_digit(int value){
    if(value<=9){
        return value;
    }
    return value%10+sum_of_digit(value/10);
}
int main(){
    long long int  value;
    cout<<"enter a value for sum of digit"<<endl;
    cin>>value;
    int ans=sum_of_digit(value);
    cout<<ans<<endl;
}