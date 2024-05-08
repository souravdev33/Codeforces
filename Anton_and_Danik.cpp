#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a=0,d=0;
    cin>>n;
    string str;
    cin>>str;

    for(int i=0;i<=str.size();i++)
    {
        if(str[i]=='A')
        {
            a++;
        }
        if(str[i]=='D')
        {
            d++;
        }
    }
    if(a>d)cout<<"Anton"<<endl;
    if(a<d)cout<<"Danik"<<endl;
    if(a==d)cout<<"Friendship"<<endl;
return 0;
}
