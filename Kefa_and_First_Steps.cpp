#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mx=1,count=1;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            count++;
            mx=max(mx,count);
        }
        else
        {
            count=1;
        }
    }
    cout<<mx<<endl;
return 0;
}
