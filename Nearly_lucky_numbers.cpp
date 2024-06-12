#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int count=0;

    cin>>str;

    int n=str.size();

    for(int i=0;i<=n;i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            count++;
        }

    }
    if(count==4 || count==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
return 0;
}
