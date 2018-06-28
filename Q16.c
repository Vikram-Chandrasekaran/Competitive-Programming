#include<stdio.h>
void lcm_gcd(int,int,int*,int*);
int main()
{
    int i,n1,n2,lcm[1],hcf[1],max;
    scanf("%d%d",&n1,&n2);
    lcm_gcd(n1,n2,lcm,hcf);
    printf("HCF is %d",hcf[0]);
    printf("\nLCM is %d",lcm[0]);
    return 0;
}
void lcm_gcd(int n1,int n2,int *lcm,int *hcf)
{
    int i,max;
    if(n1<=n2)
    {
        for(i=1;i<=n1;i++)
        {
            if((n1%i==0)&&(n2%i)==0)
                max=i;
        }
    }
    else
    {
        for(i=1;i<=n2;i++)
        {
            if((n1%i==0)&&(n2%i)==0)
                max=i;
        }
    }
    *hcf=max;
    *lcm=(n1*n2)/max;
}
