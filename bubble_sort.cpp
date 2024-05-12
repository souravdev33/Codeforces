#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,arr[10];
    cin>>n;

    for(int a=0;a<n;a++)
    {
        cin>>arr[a];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<' ';
    }



}
