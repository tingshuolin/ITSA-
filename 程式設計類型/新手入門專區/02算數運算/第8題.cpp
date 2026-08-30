#include <stdio.h>
#include <math.h>
int main()
{
	int a[5],b[5],n,i,j;
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i < n ;i++)
	{
		for(j = 1;j < 4;j++)
		{
			if(j == 3)
			{
				b[i] = pow(a[i],j);
				printf("%d",b[i]);
				break;
			}
			b[i] = pow(a[i],j);
			printf("%d ",b[i]);
		}
		printf("\n");
	}
			
    return 0;
}
