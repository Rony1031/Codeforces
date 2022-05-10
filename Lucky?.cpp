//https://codeforces.com/contest/1676/problem/A
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
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            sum1+=(s[i]-'0');
        }

        for(int i=3;i<6;i++){
            sum2+=(s[i]-'0');
        }

        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}
