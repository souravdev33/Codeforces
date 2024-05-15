#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,k;
    cin>>n;

    string str;
    cin>>str;
    int len=str.size();
    int fact = 1;
    for(int i=n;i>0;i=i-len)
    {
       fact=fact*i;
    }

    cout<<fact<<endl;

    return 0;
}
