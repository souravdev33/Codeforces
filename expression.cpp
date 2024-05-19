#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,m,n,o,p;

    cin>>a>>b>>c;

    m=a+(b*c);
    n=a*(b+c);
    o=a*b*c;
    p=(a+b)*c;

    int max_val = max({m,n,o,p});

    cout<<max_val;
return 0;
}
