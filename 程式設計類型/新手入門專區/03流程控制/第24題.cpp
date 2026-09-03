#include <stdio.h>


int main() {
   	
   	long long n,i,j,total=1;
   	scanf("%lld",&n);
   	long long a[n],e[n];
   	for(i = 0; i < n;i++)
   	{
   		scanf("%lld",&a[i]);
	}
	for(i = 0;i < n;i++)
	{
		for(j = 1;j <= a[i]; j++)
		{ 
			total = total * j;
			
		}
		if(a[i] != 0)
		{
			printf("%lld\n",total);
			total = 1;
		}
		else
		{
			printf("0");
			total = 1;
		}
		
	}
	return 0;
}
