#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    char c;
    cin>>c;
   
    if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='r'||c=='s') cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }
return 0;
}


{
    int x;
    cin>>x;
    if(x%2==0 && x>2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}