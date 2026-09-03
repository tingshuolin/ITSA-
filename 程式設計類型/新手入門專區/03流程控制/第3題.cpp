#include <stdio.h>

int main()
{
	int n,flag = 0;
	scanf("%d",&n);
	for(int j = 2; j<n;j++)
	{
		if(n % j == 0)
		{
			flag = 1;
			break;
		}	
	}
	if(flag == 0 && n != 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}

		

