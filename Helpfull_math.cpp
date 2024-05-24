#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1="";
    cin>>str;
    int n=str.size();

    for(int i=0;i<n;i++)
    {
        if(str[i]!='+')
        {
            str1+=str[i];
        }
    }

    sort(str1.begin(),str1.end());

    cout<<str1[0];

    for(int i=1;i<str1.size();i++)
    {
        cout<<'+'<<str1[i];
    }
return 0;
}
