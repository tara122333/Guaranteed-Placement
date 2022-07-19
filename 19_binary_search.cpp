#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Binary(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while(e>=s){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;

}

int main()
   {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    sort(arr,arr + n);
    int index = Binary(arr,n,x);
    cout<<index<<endl;
    return 0;
}