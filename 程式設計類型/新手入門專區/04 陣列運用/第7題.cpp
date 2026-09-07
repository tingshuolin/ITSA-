#include <stdio.h>


int main() {
   	
	long long int i,n,flag = 0,PrefixSum = 0,SuffixSum = 0;
	scanf("%lld",&n);
	int a[n],b[n];
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	
	
	
	for(i = 0;i<n;i++)
	{
		b[i] = 0;
	}
	
	for(i = 0; i < n;i++)
	{
	
		PrefixSum += a[i];
		SuffixSum += a[n-1-i];
		if(PrefixSum == SuffixSum)
		{
			flag++;
		}
    	
	}
	
	printf("%d",flag);
	
	
	return 0;
}
