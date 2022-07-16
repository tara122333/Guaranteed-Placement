#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int x;
    cin>>x;
    int sum = 1;
    for(int i=x;i>0;i--){
        sum*=i;
    }
    cout<<"factorial is : "<<sum<<endl;
    return 0;
}