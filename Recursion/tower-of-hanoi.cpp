#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n, char src,char aux, char dest ){
    if(n==1){
        cout<<src<<"  to  "<<dest<<endl;
        return ; 
    }
    tower_of_hanoi(n-1,src,dest,aux);
    tower_of_hanoi(1,src,aux,dest);
    tower_of_hanoi(n-1,aux,src,dest);
}
int main(){
    int n;
    cout<<"enter no. of disc: ";
    cin>>n;
    cout<<"Now i am moving this disc from tower src to tower dest using tower aux: "<<endl;
    tower_of_hanoi(n,'A','B','C');
    return 0;
}