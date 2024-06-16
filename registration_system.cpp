#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    string str;
    while(n--)
    {
        cin>>str;
        if(m[str]==0)
        {
            cout<<"OK\n";
            m[str]++;
        }
        else cout<<str<<m[str]++<<endl;

    }
return 0;

}
