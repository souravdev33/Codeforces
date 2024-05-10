#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>=65 && x<=96)
    {
        x=tolower(x);
        cout<<x<<endl;
    }
    
    else
    {
        x=toupper(x);
        cout<<x<<endl;
    }
  
    return 0;
}