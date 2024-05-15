#include<iostream>
using namespace std;

int main ()
{
    int t;
    string x;
    cin>>t;
    while(t--)
    {

        cin>>x;
        for(int i=x.size()-1;i>=0;i--)
        {
            cout<<x[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
