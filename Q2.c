#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int mat[n][n];
	int *ptr = &mat[0][0];
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", (ptr + i*n + j));
		}
	}
	
	int fl = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i ; j++)
		{
			if (*(ptr + i*n + j))
			{
				fl = 1;
				break;
			}	
		}
	}
	
	if(fl)
		printf ("Not Upper Triangular\n");
	else
		printf ("Upper Triangular\n");
		
	fl = 0;
	
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n ; j++)
		{
			if (*(ptr + i*n + j))
			{
				fl = 1;
				break;
			}	
		}
	}
	
	if(fl)
		printf ("Not Lower Triangular\n");
	else
		printf ("Lower Triangular\n");
	
}
