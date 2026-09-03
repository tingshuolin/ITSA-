#include <stdio.h>

int main()
{
	int x,flag = 0;
	scanf("%d",&x);
	if(x % 4 == 0)
	{
		if(x % 100 == 0)
		{
			flag = 1;
		}
		if(x % 400 == 0)
		{
			flag = 0;
		}
	}
	else
	{
		flag = 1;
	}
	if(flag == 0)
	{
		printf("Bissextile Year");
	}
	else
	{
		printf("Common Year");
	}
	
	return 0;
}
