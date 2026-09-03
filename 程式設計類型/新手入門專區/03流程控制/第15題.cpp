#include <stdio.h>

int main()
{
	int n,i,total = 0,flag = 0,e = 0;
	scanf("%d",&n);
	int a[500] = {2};
	int b[500];
	for(i = 2; i < 500;i++)
	{
		a[i-2] = i;
		for(int j = 2; j<i;j++)
		{
			if(i % j == 0)
			{
				flag = 1;
				continue;
			}
		}
		if(flag == 1)
		{
			a[i-2] = 0;
			flag = 0;
		}
		else
		{
			b[e] = i;
			e++;
		}	
	}
	
	for(i = 0; i < n; i++)
	{
		if(b[i] == 0)
		{
			break;
		}
        if(i + 1 >= n)
        {
            printf("%d",b[i]);
            total += b[i];
            continue;
        }
		printf("%d,",b[i]);
		total += b[i]; 
	}
	printf("\n");
	printf("%d",total);
	return 0;
}
