#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=pow(a,b);
    y=pow(c,d);

    if(x>y)cout <<"Yes"<<endl;
    else cout<<"No";
    return 0;
}