#include <stdio.h>


int main() {
  unsigned long long a[10],b,n,i;
  scanf("%u",&n);
	
  if(n > 10)
  {
  	n = 10;	
  }	
  if(n < 1)
  {
  	n = 0;
  }
  for(i = 0;i<n;i++)
  {
	scanf("%llu",&a[i]);
	
  }
  for(i = 0;i<n;i++)
  {
  	if(a[i] > 31 || (double)a[i] > 31. )
  	{
  		printf("Value of more than 31\n");
		continue;	
	}
	
	b = 1ULL << a[i];
	
	printf("%llu\n",b);
  }
  
	return 0;
}
