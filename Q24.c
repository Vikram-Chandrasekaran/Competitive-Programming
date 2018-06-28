#include <stdio.h>

int main(void) {
    int num;
    scanf("%d",&num);
    sum_digits(num);
    return 0;
}
void sum_digits(int n)
{
    static int sum=0;
    if(n!=0)
    {
        sum+=(n%10);
        sum_digits(n/10);
    }
    else
    {
        printf("Sum of digits is %d",sum);
    }
}


