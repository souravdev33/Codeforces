#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,h,f,count1=0,count2=0;
    cin>>n>>h;

    for(int i=1;i<=n;i++)
    {
        cin>>f;

        if(f<=h)
        {
            count1++;
        }
        if(f>h)
        {
            count2+=2;
        }
    }

    cout<<count1+count2<<endl;
return 0;


}
