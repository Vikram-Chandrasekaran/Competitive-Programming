#include<stdio.h>
int main()
{
    int n,i,num,count=1,j;
    scanf("%d",&n);
    int a[n];
    int freq[2*n];
    int flag=0;
    int count1=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            if(a[j]==a[i])
                count++;
        for(j=0;j<i;j++)
            if(a[j]==a[i])
                flag=1;
        if(flag==0)
        {
            freq[count1]=a[i];
            freq[count1+1]=count;
            count1+=2;
        }
        count=1;
        flag=0;
        
    }
    printf("Duplicate elements:");
    for(i=1;i<count1;i=i+2)
    {
        if(freq[i]>1)
        {
            printf("%d,",freq[i-1]);
        }
    }
    printf("\nUnique elements:");
    for(i=1;i<count1;i=i+2)
    {
        if(freq[i]==1)
        {
            printf("%d,",freq[i-1]);
        }
    }
    return 0;
}
