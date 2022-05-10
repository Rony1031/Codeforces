//https://codeforces.com/problemset/problem/1657/A

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
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        double result=sqrt((x*x) + (y*y));
        
        if(floor(result)==ceil(result)){
            if(result==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            cout<<2<<endl;
        }
    }
return 0;
}
