/*
	Name: c programe for print pattern
	INPUT = 5
	*
	**
	***
	****
	*****
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter Number : "); 
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
