#include<stdio.h>
#define len 5
int main(int argC,char*argV[])
{
	double a[len];
	double sum = 0;
	printf("Enter the five real number");
	
	for(int i = 0;i < len;i++)
	{
		scanf("%lf",&a[i]);
		sum += a[i];
	}
	
	printf("the Average is %.2f",sum/5);
	
	return 0;
}
