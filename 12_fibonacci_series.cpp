#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int x;
    cin>>x;
    int t1=0;
    int t2=1;
    int next;
    for(int i=0;i<x;i++){
        next = t1+t2;
        t1=t2;
        t2=next;
        cout<<t1<<" ";
    }
    return 0;
}