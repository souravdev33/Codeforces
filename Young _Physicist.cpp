#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,y,z;
    long long x_sum=0,y_sum=0,z_sum=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        x_sum+=x;
        y_sum+=y;
        z_sum+=z;
    }
    if(x_sum==0 && y_sum==0 && z_sum==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

return 0;
}
