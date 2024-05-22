#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--){
        string str;
        cin>>str;
        int size = str.size();
        int over = size/6;
        int over_1 = size % 6;
        int wicket=0;
        int run = 0;
        for(int i=0;i<size;i++){
            if(str[i]=='W'){
                wicket++;
            }
            else
            {
                run+=str[i]-'0';
            }
        }

        if(size>6){
            if(run>1){
                if(wicket>1){
                    cout<<over<<"."<<over_1<<" Overs"<<" "<<run<<" Runs "<<wicket<<" Wickets."<<endl;
                }
                else{
                    cout<<over<<"."<<over_1<<" Overs"<<" "<<run<<" Runs "<<wicket<<" Wicket."<<endl;
                }
            }
            else if(run<=1 && wicket>1){
                cout<<over<<"."<<over_1<<" Overs"<<" "<<run<<" Run "<<wicket<<" Wickets."<<endl;

            }
            else if(run<=1 && wicket<=1){
                cout<<over<<"."<<over_1<<" Overs"<<" "<<run<<" Run "<<wicket<<" Wicket."<<endl;
            }
        }
        else if(size<=6 && run>1 && wicket>1){
            cout<<over<<"."<<over_1<<" Over"<<" "<<run<<" Runs "<<wicket<<" Wickets."<<endl;
        }
        else if(size<=6 && run>1 && wicket<=1){
            cout<<over<<"."<<over_1<<" Over"<<" "<<run<<" Runs "<<wicket<<" Wicket."<<endl;
        }
        else if(size<=6 && run<=1 && wicket<=1){
            cout<<over<<"."<<over_1<<" Over"<<" "<<run<<" Run "<<wicket<<" Wicket."<<endl;
        }
        else if(size<=6 && run<=1 && wicket>1){
            cout<<over<<"."<<over_1<<" Over"<<" "<<run<<" Run "<<wicket<<" Wickets."<<endl;
        }

    }
    return 0;
}
