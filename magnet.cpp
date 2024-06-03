#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int n,count=0;
    cin>>n;
    int x,y;
    cin>>x;

    for (int i=1;i<n;i++)
    {
        cin>>y;

        if((x==10 && y==01) || (x==01 && y==10))
        {
            count++;
        }

        x=y;
    }

    cout<<count+1<<endl;
return 0;
}
