#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc-->0){
        ll n,k;
        cin>>n>>k;
        ll res=(n-1)*k + 1;
        cout<<res<<endl;
    }    

return 0;
}