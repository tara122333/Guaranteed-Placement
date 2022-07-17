#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int sum = 1;
    for(int i=n;i>0;i--){
        sum = sum * i;
    }
    return sum;
}
int main()
   {
    int x,y;
    cin>>x>>y;
    int res = factorial(x)/(factorial(y)*factorial(x-y));
    cout<<"factoria is : "<<res<<endl;
    return 0;
}