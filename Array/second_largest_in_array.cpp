#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n(no. of value in array):"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"enter value in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*simple ways is that 
    1.find largest no. in first for loop
    2.then find another largest no. which is smaller than first no. in second for loop
    time complexity:- O(n)+O(n)*/


    //efficeint way 
    int second_largest_index=-1,largest_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest_index])
        {
            second_largest_index=largest_index;
            largest_index=i;
        }
        else if(arr[i]!=arr[largest_index]){
            if(second_largest_index==-1 || arr[i]>arr[second_largest_index])
            {
                second_largest_index=i;
            }
        }
    }
    cout<<"second largest value  is "<<arr[second_largest_index]<<endl;

}