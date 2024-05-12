#include<iostream>
#include<math.h>
using namespace std;
int main()

{

    int n,count=0;
    cin>>n;

    while(n--)
    {
        string str;
        cin>>str;
        int len=str.size();

        for(int i=0;i<=len;i++)
        {
            if(str[i]=='+' && str[i+1]=='+')
            {
                count++;
            }
            if(str[i]=='-' && str[i+1]=='-')
            {
                count--;
            }
        }


    }
      cout<<count;
return 0;

}
