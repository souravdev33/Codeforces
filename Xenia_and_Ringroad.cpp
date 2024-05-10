#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>tasks(m);
    for (int i=0;i<m;i++)
    {
        cin>>tasks[i];
    }

    long long time =tasks[0]-1;
    for (int i=1;i<m;i++)
    {

        if (tasks[i]>=tasks[i-1])
        {
            time+=tasks[i]-tasks[i-1];
        }
        else
        {

            time+=n-(tasks[i-1]-tasks[i]);
        }
    }

    cout<<time<<endl;

return 0;
}
