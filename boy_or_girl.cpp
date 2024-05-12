#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
    int n=str.size();

    set<char>st;

    for(int i=0;i<n;i++)
    {
        st.insert(str[i]);
    }

    int len=st.size();

    if(len%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
return 0;
}
