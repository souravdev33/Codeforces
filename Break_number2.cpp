#include<iostream>
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int size;
    cin>>size;
    int result=0;
    for(int i=1;i<=size;i++)
    {
        int count=0;
        long long num;
        cin>>num;
        if(num%2!=0)
        {
            count=0;
        }
        else
        {
            while(num>0)
            {
                if(num%2!=0)
                {
                    break;
                }
                else
                {
                    count++;
                    num/=2;
                }
            }
        }
        if(count>result)
        {
            result=counter;
        }
    }
    cout<<result<<endl;
return 0;
}
