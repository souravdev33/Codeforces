#include<iostream>
using namespace std;
int main ()
{

    int x,y,i,c=-1;

    cin>>x>>y;

    for(i=x; i<=y; i++)
    {

        int lucky=0,s=i;

        while(s)
        {
            if(s%10!=4 && s%10!=7)
            {
                lucky++;
            }

            s=s/10;

        }
        if(lucky==0)
        {
            cout<<i<<' ';
            c++;
        }



    }
    if(c==-1)
    {
        cout<<-1;
    }
    return 0;


}



