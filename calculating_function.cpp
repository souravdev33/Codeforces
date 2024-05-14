#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if (n%2==0)
    {
         cout<<n/2<<endl;
    }

    if(n%2!=0)
    {
         cout<<-((n+1)/2)<<endl;
    }

return 0;

}
