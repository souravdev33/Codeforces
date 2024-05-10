#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sum=0,x=0,num=0;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        sum+=arr[i];

    }
    sum=sum/2;
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
       if(num<=sum)
       {
           num+=arr[n-1-i];
           x++;
       }
    }
    cout<<x<<endl;
return 0;
}

