//
//  Q7.c
//  
//
//  Created by Vikram Chandrasekaran on 6/3/18.
//

#include "Q7.h"
//
//  Reverse_Sentence.c
//
//
//  Created by Vikram Chandrasekaran on 6/2/18.
//

#include<stdio.h>
#include<string.h>
void insert(int[],int,int,int);
int main()
{
    int a[100],n,pos,element,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d%d",&element,&pos);
    insert(a,n,element,pos);
    return 0;
}
void insert(int b[100],int size,int element,int pos)
{
    int i=size-1;
    int c[100];
    for(i=0;i<pos-1;i++)
    {
        c[i]=b[i];
    }
    c[i]=element;
    for(i=pos;i<=size;i++)
        c[i]=b[i-1];
    printf("The array after inserting an element \n");
    for(i=0;i<=size;i++)
        printf("%d ",c[i]);
    /* code */
    
}

