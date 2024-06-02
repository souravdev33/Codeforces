#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,d,x;

    cin>>a>>b>>c>>d;

    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    x=a*b*c*d;
    cout<<x;
    return 0;
}