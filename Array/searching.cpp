#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int A[],int k,int n){
    if(n<=0){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(A[i]==k){
            return i;
        }
    }
    return -1;
}
int main()
   {
    int n;
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    int k;
    cin>>k;
    int res = LinearSearch(Arr,k,n);
    cout<<res<<endl;
    return 0;
}