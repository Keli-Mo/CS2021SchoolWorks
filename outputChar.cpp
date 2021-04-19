#include<stdio.h>
#include<stdlib.h>

int main(int argC,char*argV[])
{
	int n=0,max;
	printf("HOW long is your string?\n");
	scanf("%d",&max);
	
	char str[80];

	printf("Enter a string\n");
	while((str[n]=getchar())!='\n'){
		n++;
	}
	str[n]='\0';
	
	for(int i=0;i<n;i++)
		printf("%s",str[i]);
	//scanf("%s",*p);
	
	//free(p);
	return 0;
}
