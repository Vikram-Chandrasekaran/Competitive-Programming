#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    temp=b;
    b=c;
    c=temp;
    temp=b;
    b=a;
    a=temp;
    printf("The values after swapping are a:%d  b:%d c:%d",a,b,c);
    return 0;
}
