#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x,y;
    char z;
    cin>>x>>z>>y;

    if(z=='=')
    {
        if(x==y)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    if(z=='>')
    {
        if(x>y)cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    if(z=='<')
    {
        if(x<y) cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    return 0;
}