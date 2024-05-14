#include<iostream>
using namespace std;
int main()
{
    string str1,str2="hello";
    cin>>str1;
    int j=0,count=0;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]==str2[j])
        {
            j++;
            count++;
        }
    }
    if(count==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

return 0;
}
