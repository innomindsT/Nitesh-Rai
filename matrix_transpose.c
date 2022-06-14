//  C program for finding transpose of a matrix..


#include<stdio.h>
int main(void)
{
	int m,n;
	int i,j;
	printf("enter row and column of the matrix\n");
	scanf("%d %d",&m,&n);

	int arr1[m][n],arr2[m][n];
	printf("enter elements of the array\n");

	for(i = 0 ;i < m ; ++i)
	{
		for(j = 0; j < n ;++j)
		{
		scanf("%d",&arr1[i][j]);		
		
		}		
	}	

	printf("entered matrix is \n");

	for (i = 0 ; i < m ; ++i)
        {
                for( j = 0 ; j < n ; ++j)
                printf("%d\t",arr1[i][j]);

        printf("\n");
        }

	for(i = 0 ; i < m ; ++i)
	{
		for(j = 0 ; j < n ; ++j)
		{
		arr2[i][j]=arr1[j][i];
		
		}		
	}	


	printf("elements of matrix after transpose is \n");

	for (i = 0 ; i < m ; ++i)
	{
		for( j = 0 ; j < n ; ++j)
		printf("%d\t",arr2[i][j]);	
	
	printf("\n");
	}	






return 0;
}	
