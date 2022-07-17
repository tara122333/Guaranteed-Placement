/*
1
1 2
1 2 1
1 2 6 2 1
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factoril(int x){
    int sum = 1;
    for(int i=x; i>0;i--){
        sum = sum * i;
    }
    return sum;
}
int main()
   {
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            int res = factoril(i)/(factoril(j)*factoril(i-j));
            cout<<res<<" ";
        }
        cout<<endl;
    }
    return 0;
}