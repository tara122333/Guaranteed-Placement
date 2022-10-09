#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[],int k,int l, int u){
    if(u<l){
        return -1;
    }
    int mid = l + (u-l)/2;
    if(A[mid]==k){
        return mid;
    }
    if(A[mid]<k){
        return binarySearch(A,k,l+1,u);
    }
    if(A[mid]>k){
        return binarySearch(A,k,l,mid-1);
    }
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
    int res = binarySearch(Arr,k,0,n);
    cout<<res<<endl;
    return 0;
}