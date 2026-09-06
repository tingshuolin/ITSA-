#include <stdio.h>
#include <math.h>

int main() {
   	
	int n,total = 0,i;
	scanf("%d",&n);
   	int a[n];
   	
   	for(i=0;i<n;i++)
   	{
   		scanf("%d",&a[i]);
   		total = total + (pow(a[i],2));
	}
   	
   	printf("%d",total);
	return 0;
}
