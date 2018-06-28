#include<stdio.h>
struct box
{
    float length,breadth,height,volume;
}b[100];
void calc(struct box *t)
{
    t->volume=t->length*t->breadth*t->height;
}
void accept(struct box b1[],int n1)
{
    int i;
    for(i=0;i<n1;i++)
    {
        scanf("%f",&b1[i].length);
        scanf("%f",&b1[i].breadth);
        scanf("%f",&b1[i].height);
        calc(&b1[i]);
    }
}
void display(struct box a)
{
    printf("%f %f %f \n",a.length,a.breadth,a.height);
}
int main()
{
    int i,n,j;
    scanf("%d",&n);
    accept(b,n);
    printf("The details of the boxes before sorting \n");
    for(i=0;i<n;i++)
        display(b[i]);
    for(i=0;i<n;i++)
    {
        float min=b[i].volume;
        int pos=i;
        for(j=i+1;j<n;j++)
        {
            if(b[j].volume<min)
            {
                min=b[j].volume;
                pos=j;
            }
        }
        struct box temp;
        temp=b[i];
        b[i]=b[pos];
        b[pos]=temp;
    }
    printf("The details of the boxes after sorting \n");
    for(i=0;i<n;i++)
        display(b[i]);
}
