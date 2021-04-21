#include<stdio.h>

int main(int argC,char*argV[])
{
	//二维数组储存输出 "happy",    "new",    "year",  "ID12010420180116009X"

	char str[4][40] = {"happy",    "new",    "year",  "ID12010420180116009X"};
	
	for(int i=0;i<4;i++)
	{
		printf("%s\n", str[i]);
	}
	
	return 0;
}
