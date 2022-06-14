// C program for finding min and max element of an array..

#include<stdio.h>
int main(void)
{
 	int n;
	int max = 0,min = 0;
	int i,j;
	printf("enter size of the array\n");
	scanf("%d",&n);
	int arr[n];
	
	printf("enter elements of the array\n");
	
	for(i = 0; i < n ; ++i)
	{
		scanf("%d",&arr[i]);
		
	}	
       
	for(i = 0 ; i < n  ; ++i)
	{
	    	if(max < arr[i])
		    max = arr[i];
		
	}	
	printf("max element is %d \n",max);

	for( j = 0; j < n ; ++j)
	{
	
	    	if(min > arr[i])
		min = arr[i];	
	
	}	

	printf("minimun value of the array is %d\n",min);

return 0;
}	
