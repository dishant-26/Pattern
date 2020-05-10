/*
	Name: c programe for print pattern
	INPUT = 5
	1
	12
	123
	1234
	12345
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter Number : "); 
	scanf("%d",&n);
	
	for(i=0;i<=n+1;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
