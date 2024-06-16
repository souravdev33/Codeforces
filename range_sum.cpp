#include<iostream>
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--){
        ll l,r,sum=0;
        cin>>l>>r;
        for(ll i=l;i<=r;i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
        sum=0;
 
    }
 return 0;   
}