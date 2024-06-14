#include<iostream>
using namespace std;

int main ()
{

    int n,i,c=0;

    cin>>n;

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }

    }
    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
