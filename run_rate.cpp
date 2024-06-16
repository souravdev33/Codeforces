#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,r1,r2;
    double crr,rrr,ball_played,b;
    cin>>t;
    while(t--)
    {
        cin>>r1>>r2>>b;
        ball_played=300.0-b;
        crr=(r2/ball_played)*6.0;
        rrr=((r1-r2+1.0)/b)*6.0;

        cout<<fixed<<setprecision(2)<<crr<<" "<<fixed<<setprecision(2)<<rrr<<endl;


    }

    return 0;
}
