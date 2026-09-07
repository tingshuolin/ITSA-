#include <stdio.h>
#include <math.h>

int main() {
   	
	int i,n,start,stop,total = 0;
	scanf("%d",&n);
	int a[n],b[n];
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	scanf("%d %d",&start,&stop);
	
	
	
	for(i = 0;i<n;i++)
	{
		b[i] = 0;
	}
	
	for(i = start-1; i <= stop-1;i++)
	{
	
		total = total + a[i];
		
	}
	
	printf("%d\n",total);
	
	
	return 0;
}
