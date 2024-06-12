#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        int n=str.length();

        if (str[0] =='(' && str[1]==')')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout<<"YES"<<endl;

            string sequence = string(n,'(')+ string(n,')');
            cout<<sequence<<endl;
        }
    }

    return 0;
}
