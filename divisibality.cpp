#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num1,num2,c;
    cin>>num1>>num2>>c;
    long long ma=max(num1,num2);
    long long mi=min(num1,num2);

    long long result=(ma/c-(mi-1)/c)*c*((ma/c+1)+((mi-1)/c))/2;

    cout<<result<<endl;
return 0;
}
