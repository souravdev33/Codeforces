#include<iostream>
using namespace std;

int main()
{
    int n,k,i,count=0;;
    cin>>n>>k;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int score=a[k-1];

    for(i=0;i<n;i++)
    {
        if(a[i]>=score && a[i]>0)
        {
            count++;
        }
    }

    cout<<count<<endl;

return 0;
}
