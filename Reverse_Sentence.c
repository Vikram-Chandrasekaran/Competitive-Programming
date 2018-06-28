//
//  Reverse_Sentence.c
//
//
//  Created by Vikram Chandrasekaran on 6/2/18.
//

#include<stdio.h>
#include<string.h>
void rev(char[],int);
int main()
{
    char a[100];
    gets(a);
    rev(a,strlen(a));
    return 0;
}
void rev(char b[100],int n)
{
    static int i=0;
    printf("%d",i);
    if(n%2==0)
    {
        if(i==(n/2))
        {
            printf("\nThe string after reversing is %s",b);
            exit(0);
        }
        else
        {
            char ch;
            ch=b[i];
            b[i]=b[n-i-1];
            b[n-i-1]=ch;
            i++;
            rev(b,n);
        }
    }
    else
    {
        if(i==(n/2)-1)
        {
            printf("\nThe string after reversing is %s",b);
            exit(0);
        }
        else
        {
            char ch;
            ch=b[i];
            b[i]=b[n-i-1];
            b[n-i-1]=ch;
            i++;
            rev(b,n);
        }
    }
}

