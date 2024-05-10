#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t)
        {
        int n;
        cin>>n;

        vector<long long>arr(n);
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
        }

        vector<long long> odd(n+1,0),even(n+1,0);
        for (int i=0;i<n;i++)
        {
            odd[i+1]=odd[i]+(i%2==0?arr[i]:0);
            even[i+1]=even[i]+(i%2!=0?arr[i]:0);
        }

        bool f=false;
        for (int l= 1;l<=n;l++)
         {
            for (int r=l;r<=n;r++)
                {
                if((r-l)%2==0&&odd[r]-odd[l-1]==even[r]-even[l-1])
                {
                    f=true;
                    break;
                } else if ((r-l)%2!=0 && odd[r] - odd[l- 1]==even[r-1]-even[l-1])
                {
                    f=true;
                    break;
                }
            }
            if(f) {
                break;
            }
        }

        cout<<(f ?"YES":"NO")<<endl;
    }

return 0;
}
