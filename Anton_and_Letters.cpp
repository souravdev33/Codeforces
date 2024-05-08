#include <iostream>
#include<bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    set<char>s;

    for(char c : str)
    {
        if (islower(c))
        {
            s.insert(c);
        }
    }

    cout << s.size() << endl;

    return 0;
}
