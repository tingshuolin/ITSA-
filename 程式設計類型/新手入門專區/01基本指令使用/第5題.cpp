#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,i,c[5];
	char b[5];
	
	scanf("%s",&b);
	
	a = atoi(b);
	
	for(i =0;i<5;i++)
	{
		c[i] = a / (pow(10,(4-i)));  
		a = a - (c[i] * pow(10,4-i));
		//printf("%d\n",c[i]);
	}
	a = 0;
	for(i=0;i<5;i++)
	{
		for(a =0;a<c[i];a++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
} 
