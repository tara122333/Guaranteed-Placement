#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int x;
    cin>>x;
    vector<int>vec;
    while (x>0)
    {
        int rem = x%2;
        vec.push_back(rem);
        x/=2;
    }
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i];
    }
    
    return 0;
}