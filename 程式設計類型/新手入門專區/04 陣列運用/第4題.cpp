#include <stdio.h>
#include <math.h>

int main() {
   	
	int i,n;
	scanf("%d",&n);
	int a[n],b[n] = {0};
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	b[0] = a[0];
	
	for(i = 0;i<n;i++)
	{
		for(int j = 1;j<i;j++)
		{
			b[j] =b[j] + a[j] + a[j+1];
		}
	}
	
	for(i = 0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
	return 0;
}
