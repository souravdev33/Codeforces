#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str1,str2,str3="";
    cin>>str1;
    cin>>str2;

    for(int i=str1.size()-1;i>=0;i--)
    {

        str3+=str1[i];
    }

    if(str2==str3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
return 0;
}
