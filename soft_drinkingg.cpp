#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int a=(k*l)/n;
    int b=(c*d);
    int e=p/np;

    int minimum=min({a,b,e});

    cout<<minimum/n<<endl;
return 0;
}

