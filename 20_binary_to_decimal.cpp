#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int num;
    cin>>num;
    int sum = 0;
    int two = 1;
    vector<int>vec;
    while(num>0){
        int rem = num%10;
        sum = sum + two * rem;
        two*=2;
        num/=10;
    }
    cout<<sum<<endl;
    return 0;
}