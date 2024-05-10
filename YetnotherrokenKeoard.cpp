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
        int n;
        cin>>n;

        string str;
        cin>>str;

        int count=0;
        for (int i=1;i<n;i++)
        {
            if (str[i]==str[i-1])
            {
                count++;
            }
        }

        cout<<count<<endl;
    }

return 0;
}
