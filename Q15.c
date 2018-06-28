#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct date
{
    int month;
    int year;
};
struct book
{
    int accno;
    char title[50];
    double price;
    struct date dt;
}b[100];
void display(struct book *a)
{
    printf("AccNo.: %d\nTitle: %s\nPrice: %lf\nDate: %d %d\n", a->accno, a->title, a->price, a->dt.month, a->dt.year);
}
struct book* search_title(int n)
{
    char str[50];
    int i;
    struct book *t;
    
    printf("Enter Title\n");
    gets(str);
    
    for(i = 0; i < n; i++)
    {
        if(strcmpi(b[i].title, str) == 0)
        {
            t=&b[i];
            return t;
        }
    }
    printf("Not Found");
}
struct book* search_year(int n)
{
    int y, i;
    scanf("%d", &y);
    struct book *t;
    for(i = 0; i < n; i++)
    {
        if(b[i].dt.year == y)
        {
            t=&b[i];
            return t;
        }
    }
    printf("Not Found");
}
int main()
{
    int i,n;
    printf("Enter number of books:\n");
    scanf("%d", &n);
    
    printf("Enter details of the books\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d %s", &b[i].accno, b[i].title);
        scanf("%lf %d %d",  &b[i].price, &(b[i].dt.month), &(b[i].dt.year));
    }
    int ch;
    printf("1. Search by name\n2. Search by Year\n");
    scanf("%d", &ch);
    struct book *r;
    if(ch==1)
    {
        r=search_title(n);
        printf("AccNo.: %d\nTitle: %s\nPrice: %lf\nDate: %d %d\n", r->accno, r->title, r->price, r->dt.month, r->dt.year);
    if(ch==2)
    {
        r=search_year(n);
        printf("AccNo.: %d\nTitle: %s\nPrice: %lf\nDate: %d %d\n", r->accno, r->title, r->price, r->dt.month, r->dt.year);

    }
    printf("Books published in the current year:\n");
    for(i=0;i<n;i++)
    {
        if(b[i].dt.year==2018)
            display(&b[i]);
    }
    return 0;
}
