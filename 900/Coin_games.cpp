#include<iostream>
#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,alice=0,bob=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='U')alice++;
            if(str[i]=='D')bob++;
        }
        if(alice%2!=0) yes
        else no

    }
return 0;
}