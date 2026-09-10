#include <stdio.h>
#include <math.h>

int main()
{
	int i,j,n,m,count = 0;
	int a[2],b[7];
	
	scanf("%d %d",&n,&m);
	
	for(i = 0;i < 2;i++)
	{
		a[i] = 0;
	}
	
	for(i = 0;i < 7;i++)
	{
		b[i] = -1;
	}

	for(i = 0;i < 2;i++)
	{
		a[i] = n / pow(10,2-i-1);
		n = n - (a[i] * pow(10,2-i-1));
	}	
	
	for(i = 0;i < 7;i++)
	{
		
		b[i] = m / pow(10,7-i-1);
		//printf("%d ",b[i]);
		m = m - (b[i] * pow(10,7-i-1));
		
	}
	
	
	for(j = 0;j<6;j++)
	{
		if(a[0] == b[j] && a[1] == b[j+1])
		{
			
			count++;
		}
	}
	
	printf("%d",count);
	
	return 0;
}
