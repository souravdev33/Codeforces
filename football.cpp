#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int flag=0;

    for (int i=0;i<str.size();i++)
        {
        int count=0;
        if (str[i]=='0')
         {
            while (i<str.size() && str[i]=='0')
            {
                count++;
                i++;
            }
         }
        else
        {
            while(i<str.size() && str[i]=='1')
            {
                count++;
                i++;
            }
        }

        if(count>=7)
        {
            flag=1;
            break;
        }
        i--;
    }

    if(flag==1)
     {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

return 0;
}
