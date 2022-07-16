#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int x;
    cin>>x;
    int sum = 0;
    while (x>0)
    {
        int rem = x%10;
        sum = sum*10 + rem;
        x = x/10;
    }
    cout<<"reverse number is "<<sum<<endl;
    
    return 0;
}