#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
   {
       cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value of index : "<<i+1<<" : ";
        cin>>arr[i];
    }
    display(arr,n);
    cout<<"Value after sort "<<endl;
    sort(arr,arr+n);
    display(arr,n);
    return 0;
}