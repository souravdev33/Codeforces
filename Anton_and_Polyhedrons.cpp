#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int t,count=0;
    string str;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,str);

        if(str[0]=='T')
            count+=4;
        if(str[0]=='C')
            count+=6;
        if(str[0]=='O')
            count+=8;
        if(str[0]=='D')
            count+=12;
        if(str[0]=='I')
            count+=20;
    }
    cout<<count;
return 0;
}
