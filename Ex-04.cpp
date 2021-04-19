#include<stdio.h>
#include<math.h>
double f(double x0);
double g(double x0);
double f_diff(double x0);
double g_diff(double x0);

int main(void)
{
	double x0,x0_1,x1,x2;
    
    printf("Enter the x0 for f(x) = (x-1)(x-2)(x-3)\n");
    scanf("%lf",&x0);
    do{x1=x0-f(x0)/f_diff(x0);
       x2=x1-f(x1)/f_diff(x1);
       x0=x1; 
	}while(fabs(x1-x2)>0.000001);
	printf("x=%.6f\n",x2);
	
	printf("Enter the x0 for x^3 + 1.1x^2 + 0.9x -1.4\n");
	scanf("%lf",&x0_1);
    do{x1=x0_1-g(x0_1)/g_diff(x0_1);
       x2=x1-g(x1)/g_diff(x1);
       x0_1=x1; 
	}while(fabs(x1-x2)>0.000001);
	printf("x=%f\n",x2);
	
	return 0;
	
}

double f(double x0)
{
	return (x0-1)*(x0-2)*(x0-3);
}

double g(double x0)
{
	return x0*x0*x0 + 1.1*x0*x0 + 0.9*x0 - 1.4;
}
double f_diff(double x0)
{
	return 3*x0*x0 - 12*x0 + 11;
}

double g_diff(double x0)
{
	return 3*x0*x0 + 2.2*x0 + 0.9;
}
