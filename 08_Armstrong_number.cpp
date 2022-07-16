#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int x;
    cin>>x;
    int sum = 0;
    int original_num = x;
    while(x>0){
        int rem = x%10;
        sum+=pow(rem,3);
        x/=10;
    }
    if(original_num==sum){
        cout<<"Number is armstrong"<<endl;
    }
    else{
        cout<<"Number is not amstrong"<<endl;
    }
    return 0;
}