#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{

    int t,sq_root;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        sq_root=sqrt(n);
        if(sq_root*sq_root==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
return 0;
}
