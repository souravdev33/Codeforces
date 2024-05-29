

/*---ॐ हरे कृष्णा ॐ---*/
/*Author:-Sourav Dev*/

#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define umap unordered_map
#define uset unordered_set
#define mk make_pair
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define PHI 1.618033988749895 // Golden Ratio
#define PSI -0.618033988749895 // Conjugate of Golden Ratio
#define read(type) readInt<type>()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
using namespace std;

int main (){
    fast;
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        vector<string>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll res=0;
        for (char c='a';c<='e';c++) {
            vector<int>balance(n);
          
            for (int i=0;i<n;i++) {
                ll count=0;
                for(char ch : arr[i]) {
                    if (ch==c)
                        count++;
                    else
                        count--;
                }
                balance[i]=count;
            }
            sort(balance.begin(), balance.end(), greater<int>());
            
            ll curr_balance=0;
            ll count=0;
            for (int i=0;i<n;i++) {
                curr_balance+=balance[i];
                if (curr_balance > 0)
                    count++;
                else
                    break;
            }
            res=max(res,count);
        }

        cout<<res<<endl;
    }

return 0;
}
