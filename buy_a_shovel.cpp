#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i=1;
    cin>>a>>b;
    while(a*i%10!=b && a*i%10!=0)
    {
        i++;
    }
    cout<<i;
return 0;
}

