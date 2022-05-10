//https://codeforces.com/problemset/problem/835/A

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<complex>
#include<cstring>
#include<string>
#include<set>
#include<map>
#include<list>
#include<vector>
#include<fstream>
using namespace std;
int main(){
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int r=s*v1+2*t1;
    int q=s*v2+2*t2;

    if(r<q){
        cout<<"First"<<endl;
    }
    else if( q<r){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
return 0;
}
