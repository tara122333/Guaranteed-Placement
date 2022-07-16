#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
   {
    int x,y;
    cin>>x>>y;
    int i = x;
    if(x<=1){
        i = 2;
    }
    for(;i<=y;i++){
        if(prime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}