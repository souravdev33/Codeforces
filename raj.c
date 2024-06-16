#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    if(n>=0 && n<=100){
        printf("Inside range\n");

    }
    else{
        printf("Outside range\n");
    }

    if(n>25 && n<=50)
    {
        printf("First half\n");
    }
    if(n>50 && n<=75){
        printf("Second half\n");
    }
return 0;

}

