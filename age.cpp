#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,year,month,day;

    cin>>n;
    year=n/365;
    month=(n%365)/30;
    day=(n%365)%30;

    cout<<year<<" "<<"years"<<endl;
    cout<<month<<" "<<"months"<<endl;
    cout<<day<<" "<<"days";
    return 0;


}