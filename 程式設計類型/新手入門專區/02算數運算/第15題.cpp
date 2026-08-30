#include <stdio.h>
#include <math.h> 

int main() {
   	int a;
   	double b;
   	scanf("%d",&a);
   	if(a <= 800)
   	{
   		b = (double)a * 0.9;
        break;		
	}
	if(a > 800 && a <= 1500)
	{
		b = (double)a * 0.9 * 0.9;
	}
	if(a > 1500)
	{
		b = (double)a * 0.9 * 0.79;
	}
   	printf("%.1lf",b);
	return 0;
}
