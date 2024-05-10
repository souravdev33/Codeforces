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
        int n=str.size();

        if(n<=10){
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<n-2<<str[n-1]<<endl;
        }
    }
    return 0;
}
