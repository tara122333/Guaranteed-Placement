#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool pythogorem(int a, int b, int c){
    int x = max(a,max(b,c)); // max value;
    int y;
    int z;
    if(a>b){
        if(a>c){
            y=b;
            z=c;
        }
        else{ // c>a
            y = b;
            z = a;
        }
    }
    else if(b>a){
        if(b>c){
            z=a;
            y=c;
        }
        else{ // c>b
            z = b;
            y = a;
        }
    }
    if((x*x) == ((y*y)+(z*z))){
        return true;
    }
    return false;

}

int main()
   {
    int x,y,z;
    cin>>x>>y>>z;
    if(pythogorem(x,y,z)){
        cout<<"triangle is pythogorem triangle"<<endl;
    }
    else{
        cout<<"triangle is Not pythogorem triangle"<<endl;

    }
    return 0;
}