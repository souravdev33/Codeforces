#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    int t,x,i;
    cin>>t;
    while(t--)
    {
        cin>>x;
        for(i=0;i<x;i++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
