#include<bits/stdc++.h>
#include<math.h>

using namespace std;
int main()
{
    int x,y,z;
    char c1,c2;
    cin >> x >>c1>>y>>c2>>z;
    
    if(c1=='+')
    {
        if(x+y==z)cout<<"Yes"<<endl;
        else cout<<(x+y);

    }
    
    if(c1=='-')
    {
        if(x-y==z)cout<<"Yes"<<endl;
        else cout<<(x-y);

    }
    
    if(c1=='*')
    {
        if(x*y==z)cout<<"Yes"<<endl;
        else cout<<(x*y);

    }
    return 0;

}