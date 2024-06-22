#include<iostream>
using namespace std;
int main ()
{
    int x,y,t,temp;

    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        int sum=0;

        for(int i=x+1;i<y;i++){
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;

}
