#include<stdio.h>
//      将整数存入数组 
int main()
{
	int n=59277;
	int result, temp, i=0, j=0, k, m;
	int numbers[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	
	//分割每一位数字并分别导入数组（逆序） 
	while(n != 0)
	{
		result = n%10;
		numbers[i] = result;
		i++;
		n = n/10;
	}                            
	
	//统计位数	
	while(numbers[j] >=0)
	{
		j++;
	}
	
	//调整 为正序 
	for(k=0;k<(j/2);k++)
	{
		temp = numbers[k];
		numbers[k] = numbers[j-1-k];
		numbers[j-1-k] = temp;
	}
	
	//输出 
	for(m=0;m<j;m++)
	{
		printf("%d ",numbers[m]);
	}
	
	return 0;
}

