#include<stdio.h>
int main()
{
    int i,j,sum=0,fact=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            fact*=j;
        sum+=(fact/i);
        fact=1;
    }
    printf("%d",sum);
    return 0;
}

