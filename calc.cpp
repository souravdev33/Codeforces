#include<iostream>
using namespace std;

int main ()
{
    int x,y;
    char c;
    cin >> x>>c>>y;

    if(c =='+') cout<<x+y<<endl;
    else if(c =='-') cout<<x-y<<endl;
    else if(c =='*') cout<<x*y<<endl;
    else if(c =='/') cout<<x/y<<endl;
return 0;
}