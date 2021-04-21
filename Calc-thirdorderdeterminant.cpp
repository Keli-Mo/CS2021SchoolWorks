#include<stdio.h>

int main(void)
{
		printf("Enter your Third-order determinant\n");
		
		int i,a[3][3],j,sum1,sum2;
	
		for(i=0;i<3;i++)
	
		{
			for(j=0;j<3;j++)
			
			scanf("%d",&a[i][j]);
		}
	
		sum1=a[0][2]*a[1][0]*a[2][1]+a[0][1]*a[1][2]*a[2][0]+a[0][0]*a[1][1]*a[2][2];
		
		sum2=a[2][2]*a[0][1]*a[1][0]+a[2][1]*a[1][2]*a[0][0]+a[0][2]*a[1][1]*a[2][0];
	
		printf("%d",sum1-sum2);
		
		return 0;
}
