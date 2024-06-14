#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int counter=1;

    for(int i=1;i<=n;i++)
    {
        cout<<counter<<' '<<counter+1<<' '<< counter+2<<' '<<"PUM"<<endl;
        counter=counter+4;
    }
    return 0;
}