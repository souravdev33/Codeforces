#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sum1=0,sum2=0;
    cin>>m>>n;
    int a,b;
    for(int i=1;i<=m;i++)
    {
        cin>>a;
        sum1+=a;
    }
    for(int j=1;j<=n;j++)
    {
        cin>>b;
        sum2+=b;

    }
    if(sum1==sum2)
    {
        cout<<"Yes"<<endl;

    }
    else {
        cout<<"No"<<endl;
    }
return 0;
}
