#include<stdio.h>
#include<string.h>
struct billing
{
    char name[25],street[15],city[15],state[15],acc_type[15],pay_date[9];
    float pre_bal,cur_pay,new_bal,cur_bal;
    long int acc_num;
};
void accept(struct billing c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
     gets(c[i].name);
     gets(c[i].street);
     gets(c[i].city);
     gets(c[i].state);
     gets(c[i].pay_date);
     scanf("%d",&c[i].acc_num);
     scanf("%f",&c[i].pre_bal);
     scanf("%f",&c[i].cur_pay);
    }
}
void update(struct billing b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if((b[i].cur_pay>0)&&(b[i].cur_pay<(0.1*b[i].pre_bal)))
            strcpy(b[i].acc_type,"overdue");
        else if((b[i].pre_bal==0)&&(b[i].cur_pay==0))
            strcpy(b[i].acc_type,"delinquent");
        else
            strcpy(b[i].acc_type,"current");
        b[i].new_bal=b[i].pre_bal-b[i].cur_pay;
    }
}
void display(struct billing a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Customer %d\n",i+1);
        printf("Name:%s \n Street:%s \n City:%s \n State:%s \n Account number:%ld \n Account type:%s \n Previous balance: %f \n Current Balance:%f \n New balance:%f \n Payment Date:%s \n",a[i].name,a[i].street,a[i].city,a[i].state,a[i].acc_num,a[i].acc_type,a[i].pre_bal,a[i].cur_bal,a[i].new_bal,a[i].pay_date);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    struct billing t[n];
    int i;
    accept(t,n);
    update(t,n);
    display(t,n);
    return 0;
}
