#include <stdio.h>

int main()
{
	int a[5],b[5],c[5],n,i;
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	
	for(i = 0; i < n ;i++)
	{
		c[i] = (a[i]+b[i]) * (a[i]+b[i]);
		printf("%d\n",c[i]); 
	}
			
    return 0;
}
