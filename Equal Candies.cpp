//https://codeforces.com/contest/1676/problem/B

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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        int sum=0;
        for(int i=1;i<n;i++){
            sum+=(arr[i]-arr[0]);
        }

        cout<<sum<<endl;
    }
return 0;
}
