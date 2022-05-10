//https://codeforces.com/contest/1676/problem/C

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
        int n,m;
        cin>>n>>m;
        string str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }

        int result=INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=0;
                for(int k=0;k<m;k++){
                    sum+=abs(str[i][k]-str[j][k]);
                }

                result=min(result,sum);
            }
        }

        cout<<result<<endl;
    }
return 0;
}
