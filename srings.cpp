#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{

    string a,b,c;
    cin>>a;
    cin>>b;

    int x=a.size();
    int y=b.size();

    c=a+b;
    swap(a[0],b[0]);

    cout<<x<<' '<<y<<'\n'<<c<<'\n'<<a<<' '<<b<<'\n'<<endl;
return 0;

}
