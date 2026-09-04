#include <stdio.h>


int main() {
   	
   	int a,i,flag =0;
   	scanf("%d",&a);
   	
   	if(a % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	if(a == 1)
	{
		flag = 1;
	}
	else
	{
		for(i = 2;i<a;i++)
   		{
   			if(a % i == 0 )
			{
				flag = 1;
			}
		}
	}
   	
	
	if(flag == 0)
	{
		printf(" prime");
	}
	return 0;
}
