#include <stdio.h>

int main()
{
	int n,i,total =0;
	scanf("%d",&n);
	for(i =1;i<=n;i++)
	{
		if(i % 2 == 0 && i % 3 == 0 && i % 12 != 0)
		{
			total = total + i;
		}
	}
	
	printf("%d",total);
	return 0;
}

		

