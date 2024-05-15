#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
    {
    int n;
    cin>>n;

    vector<int>a(n);
    for (int i=0; i<n;i++)
    {
      cin>>a[i];
    }

    bool gd=true;

    if (n == 2) {
      gd = true;
    } else {
      int target =a[0]+a[1];

      for (int i=1;i<n-1;i++)
      {
        if(a[i]+a[i+1]!=target)
        {
          gd=false;
          break;
        }
      }
    }

    if (gd)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
  }

return 0;
}
