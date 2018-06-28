#include<stdio.h>
#include<string.h>
int main()
{
    int n,space=0,i,flag=0;
    scanf("%d",&n);
    char a[n],freq[n];
    int freqnum[n];
    gets(a);
    int len=0;
    while(a[len]!='\0')
    {
        len++;
    }
    printf("Length of the string:%d\n",len);
    int j;
    for(j=0;j<len;j++)
    {
        printf("%c ",a[j]);
        if(a[j]==' ')
            space++;
    }
    printf("\nNumber of words:%d\n",space+1);
    int count=1;
    int count1=0;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
            if(a[j]==a[i])
                count++;
        for(j=0;j<i;j++)
            if(a[j]==a[i])
                flag=1;
        if(flag==0)
        {
            freq[count1]=a[i];
            freqnum[count1]=count;
            count1++;
        }
        count=1;
        flag=0;
    }
    int max=freqnum[0];
    int pos=0;
    for(i=0;i<count1;i++)
    {
        if(freqnum[i]>max)
        {
            pos=i;
            max=freqnum[i];
        }
    }
    for(i=0;i<count1;i++)
    {
        printf("%c %d\n",freq[i],freqnum[i]);
    }
    printf("The maximum occuring character is: %c",freq[pos]);
    return 0;
}

