//https://codeforces.com/problemset/problem/723/A

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
    int a,b,c;
    cin>>a>>b>>c;
    int Mx=max(a,max(b,c));
    int Mn=min(a,min(b,c));
    int result=-1;
    int distance=INT_MAX;
    for(int i=Mn;i<=Mx;i++){
       int dis=abs(a-i)+abs(b-i)+abs(c-i);
        if(dis<distance){
          distance=dis;
          result=i;
        }
    }
    cout<<abs(result-a)+abs(result-b)+abs(result-c)<<endl;
return 0;
}
