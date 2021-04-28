#include<stdio.h>

void print(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    
    print(n);
    return 0;
}

void print(int n)
{
	printf("1*1=1\n");
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        	if((i==3&&j==3)||(i==4&&j==3))
        	{
	        	printf("%2d*%d=%d   ",j,i,i*j);
	            if(i==j)
	            {
	            	printf("\n");
	            	break;
	            }
			}
			else
			{
				printf("%d*%d=%d   ",j,i,i*j);
	            if(i==j)
	            {
	            	printf("\n");
	            	break;
				}
			}
        }   
    }
    
}
