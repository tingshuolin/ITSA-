#include <stdio.h>


int main()
{
	int i,a[100],n = 0;
	
	while (scanf("%d", &a[n]) == 1)
	{
    	n++;
	}
	
	for(i = n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
	
	printf("\n");
	return 0;
}
