#include<stdio.h>
void fact(int);
void display(int*,int);
int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
    return 0;
}
void fact(int number)
{
    int i,a[100],count=0;
    for(i=1;i<=(number/2);i++)
        if(number%i==0)
        {
            a[count]=i;
            count++;
        }
    display(a,count);
}
void display(int *p,int n)
{
    int i=0;
    while(i!=n)
    {
        printf("%d ",*p);
        p++;
        i++;
    }
}
