#include<iostream>

using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int a,b;
        long long x,y;
        cin>>a>>b;

        x=a+b;
        y=a-b;

        cout<<x/2<<' '<<y/2<<endl;

    }
return 0;
}

