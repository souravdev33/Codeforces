#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int in=0;
    int out=0;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        in=(in-a)+b;
        if(in>out)
        {
            out=in;
        }
    }

    cout<<out<<endl;

    return 0;
}
