#include<bits/stdc++.h>
using namespace std;
int main ()
{

    char x;
    cin >> x;
    if(x>=48 && x<=58)cout<<"IS DIGIT"<<endl;
    else if(x>=65 && x<=96)cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    else cout<<"ALPHA"<<endl<<"IS SMALL";
    return 0;
}