#include <stdio.h>
#include <math.h>

int main() {
   	
	int i,n;
	scanf("%d",&n);
	int a[n+1],b[n+1];
	
	
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i = 0;i<n;i++)
	{
		b[i] = 0;
	}
	
	b[0] = a[0];
	
	for(i = n;i>0;i--)
	{
		if(i - 1 < 0)
		{
			b[0] = a[0];
			break;
		}
		b[i] =  a[i] - a[i-1];
	}
	
	
	for(i = 0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
	return 0;
}
