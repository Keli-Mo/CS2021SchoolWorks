#include<stdio.h>

void Calc_determinant(int a[3][3]);

int main(int argC,char*argV[])
{
	int a[3][3];
	
	printf("Enter your Third-order determinant\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	
	
	Calc_determinant(a);
	
	return 0;
} 

void Calc_determinant(int a[3][3])
{
	int sum_plus,sum_minus;
	
	sum_plus  = a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1];
	sum_minus = a[2][2]*a[0][1]*a[1][0]+a[2][1]*a[1][2]*a[0][0]+a[0][2]*a[1][1]*a[2][0];
	
	printf("%d",(sum_plus-sum_minus));
}

