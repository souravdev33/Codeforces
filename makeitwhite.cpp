#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<long long> a(n);
        string str;
        ll maximum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            str += 'i';
            maximum = max(maximum,a[i]);
        }

        string s = "abcdefghijklmnopqrstuvwxyz";
        ll c = 0;
        ll count = 0;
        for (ll c = 0; count < n; c++)
        {
            for (ll i = 0,j = 0; i < n; i++)
            {
                if (a[i] == j)
                {
                    char ch = s[c];
                    str[i] = ch;
                    a[i] = MOD;
                    j++;
                    count++;
                }
            }
        }
        cout <<str<<endl;
    }
    return 0;
}
