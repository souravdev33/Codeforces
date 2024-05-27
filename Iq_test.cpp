#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,value,pos=0;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];


       if(arr[i]%2!=0){
           value=arr[i];
           pos=i+1;
           break;
       }
   }


   cout<<pos;
return 0;
}
