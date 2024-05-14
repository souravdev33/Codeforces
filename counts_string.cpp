#include<iostream>
#include<string>
using namespace std;
int main ()
{

    string str;
    int sum=0;

    cin>>str;
    for(char digit : str)
    {

        sum+=digit -'0';
    }
    cout<<sum<<endl;
return 0;
}
