#include <stdio.h>

int main()
{
	int a,i,bit;
	scanf("%d",&a);
	for(i = 7;i>=0;i--)
	{
		bit = (1 << i);
		if(a & bit)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	return 0;
}
		

