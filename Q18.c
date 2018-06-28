#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],t[n][m],c[m][m];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            t[i][j]=a[j][i];
        }
        printf("\n");}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);}
        printf("\n");}
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",t[i][j]);}
        printf("\n");}
    
    int n1=0,n2=0;
    i=0;
    int sum=0;
    while((n1!=m))
    {
        while(n2!=m)
        {
            for(j=0;j<=m;j++)
                sum+=(a[i][j]*t[j][n2]);
            c[n1][n2]=sum;
            sum=0;
            n2++;
        }
        n2=0;
        n1++;
        i++;
    }
    printf("\n \n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",c[i][j]);}
        printf("\n");}
    
    
}

