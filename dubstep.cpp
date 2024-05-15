#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;

    string result;

    for(int i=0;i<str.size();i++)
    {
        if (str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i += 2;
            if(!result.empty() && result.back()!=' ')
            {
                result +=' ';
            }
        }
        else
        {
            result+=str[i];
        }
    }

    cout<<result;

return 0;
}
