#include<stdio.h>
#define columns 7
#define rows 3

int main(int argC,char*argV[])
{
	int a[rows][columns]={{1,2,3,4,5,6,7},{7,6,5,4,3,2,1},{3,2,1,4,5,6,7}};
	int  sum = 0;
	
	for(int i=0;i<rows;i++)
	
	{
		for(int j=0;j<columns;j++)
			{
				printf("%d",a[i][j]);
				sum+=a[i][j]*a[i][j];
			}
		printf("\n");
	}
	
	printf("\n");	
	printf("%d",sum);
		
	return 0;
} 
