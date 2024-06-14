#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int sum = 0;
       ll first,second;
       cin>>first>>second;
       for(int  =min(first,second);j<=max(first,second);j++)
       {
           sum+=j;
       }
       cout<<sum<<"\n";
    }
    return 0;
}