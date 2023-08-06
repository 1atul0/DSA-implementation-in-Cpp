#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(string &s,int start,int end)
{
    if(start>=end)
    return true;
    return (s[start]==s[end]) && check_palindrome(s,start+1,end-1);
}
int main(){
    string s;
    cout<<"enter a string for check palindrome: ";
    cin>>s;
    bool ans=check_palindrome(s,0,s.length()-1);
    string res=ans==1?"yes":"no";
    cout<<"palindrome or not: "<< res<<endl;
}
