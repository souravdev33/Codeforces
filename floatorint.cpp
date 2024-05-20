#include<bits/stdc++.h>

using namespace std;

int main ()
{
    float n,y;
    int x;

    cin>>n;
    x=int(n);
    y=n-x;
    if(y!=0)cout<<"float "<<x<<" "<< y<<endl;
    else cout<<"int"<<" "<<x;
return 0;
}