#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
 {
    int i,count1=0,count2=0;
    string str;
    cin>>str;
    int n=str.size();

    for (i=0;i<n;i++)
    {
        if(islower(str[i]))
            count1++;
        else if(isupper(str[i]))
            count2++;
    }

    if (count1>=count2)
    {
        for (i=0;i<n;i++)
        {
            str[i]=tolower(str[i]);
        }
    }
    else
    {
        for (i=0;i<n;i++)
        {
            str[i] = toupper(str[i]);
        }
    }

    cout<<str;
    return 0;
}
