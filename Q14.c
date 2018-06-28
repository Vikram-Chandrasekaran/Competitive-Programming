#include<stdio.h>

int main()
{
    int m, n, i, j;
    
    scanf("%d %d", &m, &n);
    int a[m][n];
    int row_sum[m];
    int *s =row_sum;
    int *p = a;
    for(i = 0; i < m; i++)
    {    int sum = 0;
        for(j = 0; j < n; j++)
        {
            scanf("%d", &(*p));
            sum += (*p);
            p++;
        }
        *s = sum;
        s++;
    }
    s=row_sum;
    for(i = 0; i < m; i++)
        printf("%d ", *(s++));
}
