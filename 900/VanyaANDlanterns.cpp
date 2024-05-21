

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

int main()
{
    fast;
    int n,l,m=0;
    cin>>n>>l;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for (int i=0;i<n-1;i++)
    {
        if (v[i+1]-v[i] > m)
            m= v[i+1] - v[i];
    }
    double x = v[0];
    double y =(double)(m)/2;
    double ans =max(x,y);
    double z =l-v[n-1];
    double result=max(ans,z);

    cout<<fixed<<setprecision(10)<<result<<endl;


return 0;
}
