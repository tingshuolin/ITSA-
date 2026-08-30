#include <stdio.h>


int main() {
  unsigned int a[10],b,n,i;
  scanf("%u",&n);

  for(i = 0;i<n;i++)
  {
	scanf("%u",&a[i]);
	
  }
  for(i = 0;i<n;i++)
  {
  	if(a[i] > 31)
  	{
  		printf("Value of more than 31");
		break;	
	}
	
	b = 2 << a[i];
	printf("%u\n",b/2);
  }
  
	return 0;
}
