#include <stdio.h>
#include <math.h> 

int main() {
   	int n,i,to600 = 0,to900 = 0,max,total = 0;
   	double average;
   	scanf("%d",&n);
   	int a[n];
   	for(i = 0;i<n;i++)
   	{
   		scanf("%d",&a[i]);	
   		
	}
	max = a[0];
	for(i = 0;i<n;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	for(i = 0;i<n;i++)
	{
		if(a[i] >= 900)
		{
			to900++;
		}
		if(a[i] > 600 && a[i] <= 700)
		{
			to600++;
		}
	}
	for(i = 0;i<n;i++)
	{
		total += a[i];
	}
	average = (double)total / (double)n;
	printf("%d\n",max);
	printf("%d\n",to900);
	printf("%d\n",to600);
	printf("%.1lf\n",average);
	
	return 0;
}
