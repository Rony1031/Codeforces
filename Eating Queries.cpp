//https://codeforces.com/contest/1676/problem/E

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <complex>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n,greater<int>());

        long long Sr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            Sr[i] = sum;
        }
        
        while (q--)
        {
            long long x;
            cin >> x;

            if (x > Sr[n-1])
            {
                cout << -1 << endl;
            }
            else if (x <= Sr[0])
            {
                cout << 1 << endl;
            }
            else
            {
                long long result = -1;
                long long l=0,u=n-1;

                while(l>=0 && u<=n-1){
                    long long mid=(l+u)/2;
                    if(Sr[mid]>=x && Sr[mid-1]<x){
                        result=mid+1;
                        break;
                    }
                    else if(Sr[mid]<x){
                        l=mid+1;
                    }
                    else{
                        u=mid-1;
                    }
                }

                cout << result << endl;
            }
        }
    }
    return 0;
}
