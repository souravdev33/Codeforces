#include<iostream>
using namespace std;

int main()
{
    int a,b,c,min,max;
    cin >>a>>b>>c;
    min=a;
    max=a;
    if(b<min)min=b;
    if(c<min)min=c;
    if(b>max)max=b;
    if(c>max)max=c;

    cout<< min <<" "<< max;
return 0;
}