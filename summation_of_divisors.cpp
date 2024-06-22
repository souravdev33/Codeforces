#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,sum=0;
    int i;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        sum=sum+i;
        if(i != sqrt(n))
        {
			sum+=n/i;
    }
    }
    cout<<sum<<endl;
return 0;
}