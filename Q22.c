#include<stdio.h>
void bin(int);
int main()
{
    
    int n;
    scanf("%d",&n);
    bin(n);
    return 0;
}
void bin(int num)
{
    int a[100],i,j,n=num;
    for(i=0;num!=0;i++)
    {
        a[i]=num%2;
        num=num/2;
    }
    printf("The binary representation of %d:  ",n);
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
}
