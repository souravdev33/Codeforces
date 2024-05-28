#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n, k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        if(v.size()==1){
            cout<<0<<endl; // Special case handling for single problem
            continue;      
        }

        int count=1, temp=0; 
        for(int i=0;i<n-1;i++){ 
            if(v[i+1]-v[i]<=k){
                count++;
            }
            else{
                temp=max(temp,count); // Update temp when count is reset to 1
                count=1;
            }
        }
        temp=max(temp,count); // Update temp after the loop ends
        cout<<n-temp<<endl; 
    }
    return 0;
}
