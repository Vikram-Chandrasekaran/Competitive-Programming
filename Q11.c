#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    int *p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    p=a;
    i=0;
    while(i!=n)
    {
        sum+=(*p);
        p++;
        i++;
    }
    printf("%d",sum);
    return 0;
}
