// C program for pascal triangle...

#include<stdio.h>
void pascaltriangle(int );
int main(void)
{
	int n;
	printf("enter number of line to print \n");
	scanf("%d",&n);

	pascaltriangle(n);

return 0;
}


void pascaltriangle(int m)
{
	int i,j;
	
	for(i = 1 ; i <= m ; ++i)
	{
		int k = 1;	

		for(j = 1 ; j <= i ; ++j)
		{
			printf("%d\t",k);
		
			k = k * (i - j) / j;
		
		}	
		printf("\n");
	
	}	
}	
