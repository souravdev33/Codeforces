#include<iostream>
using namespace std;
int main()
{
    string c;
    cin>>c;

    for(int i=c.size()-1;i>=0;i--)
    {
        cout<<c[i]<<' ';
    }
    return 0;
}