/*you should cut maximum no. of rope amount
i/p= n=5 a=2 b=5 c=1   o/p= 5   (1,1,1,1,1)
i/p  n=23  a=12 b=9 c=11  o/p= 2  (11,12)
time compllexity:- O(3^n)
*/
#include<bits/stdc++.h>
using namespace std;
int maxcuts(int n,int a,int b,int c)
{
    if(n==0){
        return 0;
    }
    if(n<=-1){
        return -1;
    }
    int res=max(maxcuts(n-a,a,b,c),max(maxcuts(n-b,a,b,c),maxcuts(n-c,a,b,c)));
    if(res==-1)
    return -1;
    return res+1;
}
int main(){
    int n,a,b,c;
    cout<<"enter value of maximum length and rope cutting value(n,a,b,c): ";
    cin>>n>>a>>b>>c;
    int res=maxcuts(n,a,b,c);
    if(res==-1){
        cout<<"no cutting possible";
    }
    else
    cout<<"maximum no. of cutting row is: "<<res<<endl;


}