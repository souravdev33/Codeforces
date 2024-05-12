#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int m[5][5];


    for(int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin>>m[i][j];
        }
    }
    int row,col;
    for(int i=0;i<5;i++) {
        for(int j=0; j<5;j++) {
            if(m[i][j]==1) {
                row=i;
                col=j;
            }
        }
    }
    int n=abs(row-2)+abs(col-2);

    cout<<n<<endl;

    return 0;
}
