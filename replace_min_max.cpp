#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{      
    int n,i,maax,min;

    cin>>n;
    int a[n];
    while(n--)
    {
        cin>>a[i];
        maax=a[0];
        if(maax>a[i])
        {
            maax=a[i];
        }
    }
    while(n--)
    {
         min=a[0];
        if(min<a[i])
        {
            min=a[i];
        }

    }
     cout<<maax<<' '<<min;

       
    }
   