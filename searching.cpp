#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool count=0;
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<i<<endl;
            count=1;
            break;
        }
  
    }
    if(count==0)
    {
        cout<<-1<<endl;

    }
return 0;
}