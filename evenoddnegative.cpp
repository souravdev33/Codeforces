#include<iostream>
using namespace std;

int main ()
{
    int t,i,n,even,odd,positive,negative;
    for(i=0;i<t;i++)
    {
        cin>>n>>endl;
        if(n>=0)
        {
            positive++;
        }
        if(n<0)
        {
            negative++;
        }
        if(n%2==0)
        {
            even++;
        }
        if(n%2!=0)
        {
            odd++;
        }
    }
    cout<<"even"<<':'<<even<<endl;

}
