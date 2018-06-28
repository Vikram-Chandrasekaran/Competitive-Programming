#include<stdio.h>


struct vec
{
	double* a;
};

int n, k;

void modify(struct vec list[])
{
	int i, j;
	double num;
	
	printf("Enter the vector number, component number and value to be assigned.\n");
	
	scanf("%d %d %lf", &i, &j, &num);
	*((list[i-1].a)+j-1) = num;
}

void multiply(struct vec list[])
{
	int i, j;
	double lambda;
	
	printf("Enter the vector number and value by which it needs to be multipled.\n");
	
	scanf("%d %lf", &i, &lambda);
	for(j = 0; j < k ; j++)
		*((list[i-1].a)+j) = *((list[i-1].a)+j)*lambda;
}

void display(struct vec list[])
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
			printf("%lf ", *((list[i].a)+j));
		printf("\n");
	}
}
int main()
{
	int i, j;
	scanf("%d %d", &n, &k);
	
	struct vec list[n];
	double mat[n][k];
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < k; j++)
			scanf("%lf", &mat[i][j]);
		list[i].a = &mat[i][0];
	}
	
	int ch = 0;
	do{
		printf("Select operation to perform:\n1. Modify element\n2. Multiply vector by scalar\n3. Display vectors\n4. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: modify(list);
					break;
			case 2: multiply(list);
					break;
			case 3: display(list);
					break;
		}
	}while(ch != 4);
}
