#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if(a<b)
            count++;
        if(a<c)
            count++;
        if(a<d)
            count++;

        cout<<count<<endl;
        count=0;
    }
 
}