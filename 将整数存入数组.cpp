#include<stdio.h>
//      �������������� 
int main()
{
	int n=59277;
	int result, temp, i=0, j=0, k, m;
	int numbers[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	
	//�ָ�ÿһλ���ֲ��ֱ������飨���� 
	while(n != 0)
	{
		result = n%10;
		numbers[i] = result;
		i++;
		n = n/10;
	}                            
	
	//ͳ��λ��	
	while(numbers[j] >=0)
	{
		j++;
	}
	
	//���� Ϊ���� 
	for(k=0;k<(j/2);k++)
	{
		temp = numbers[k];
		numbers[k] = numbers[j-1-k];
		numbers[j-1-k] = temp;
	}
	
	//��� 
	for(m=0;m<j;m++)
	{
		printf("%d ",numbers[m]);
	}
	
	return 0;
}

