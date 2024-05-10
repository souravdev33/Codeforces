#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a],m=0,n=101,max,min;
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
        if(arr[i]>m)
        {
            m=arr[i];
            max=i;
        }
        if(arr[i]<=n)
        {
            n=arr[i];
            min=i;
        }
    }
    if(max>min)
    {
        min++;
    }
    cout<<max+(a-1)-min;
}
