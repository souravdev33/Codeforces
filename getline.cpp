#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    int i;
    getline(cin,str);

    int n=str.size();

    for(int i=0;i<=n;i++){
        if(str[i]=='\\')break;
            cout<<str[i];

    }

return 0;
}

