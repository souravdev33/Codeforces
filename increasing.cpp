#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        set<int>a;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            a.insert(x);
        }
        if(a.size()==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
