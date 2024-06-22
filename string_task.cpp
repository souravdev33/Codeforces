#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string str;
    cin>>str;
    int n=str.size();

    for(int i=0;i<n;i++)
    {

        str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
            continue;
        }
        if(str[n-1]=='.' && str[i]=='.')
            continue;
        cout<<'.';
        cout<<str[i];


    }
return 0;
}
