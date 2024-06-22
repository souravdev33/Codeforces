#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    cin>>s1;
    cin>>s2;

    int n1=s1.size();
    int n2=s2.size();

    int x=min(n1,n2);
    string str="";

    for(int i=0;i<x;i++)
    {
        if(s1[i]<s2[i]){
            str=s1;
            break;
        }
        else if(s1[i]>s2[i]){
            str=s2;
            break;
        }
    }
    if(str=="")
    {
        if(n1<n2)
        {
            str=s1;
        }
        else{
            str=s2;
        }
    }
    cout<<str;
    return 0;

}
