#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string str;
        cin>>str;

        if(str[0]+str[1]+str[2]==str[3]+str[4]+str[5])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}
