#include <stdio.h>

int main(void) {
    int num;
    scanf("%d",&num);
    perfect(num);
    return 0;
}
void perfect(int n)
{
    int i,j,sum=0;
    printf("Perfect numbers: ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(i/2);j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d ",i);
        sum=0;
    }
}


