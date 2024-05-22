#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;

    while(n--)
    {
        int x,y;
        cin>>x>>y;

        if(x+1<y)
        {
            count++;

        }
    }
    cout<<count<<endl;
return 0;
}
