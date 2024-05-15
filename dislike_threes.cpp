#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int t,n;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            if(i%3==0||i%10==3)
                n++;
        }

        cout<<n<<endl;
    }
return 0;
}
