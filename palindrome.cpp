#include<iostream>
using namespace std;
int main ()
{

    int n,temp,rem,sum=0;

    cin>>n;

    temp=n;

    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }

    if(sum==n)
    {
        cout<<n<<endl<<"YES"<<endl;
    }
    else
    {
        cout<<n<<endl<<"NO"<<endl;
    }
return 0;
}
