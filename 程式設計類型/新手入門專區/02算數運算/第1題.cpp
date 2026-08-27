#include <stdio.h>

int main()
{
    
	int a,b;
	double c;
	scanf("%d %d",&a,&b);
	
	c = (double)a * (double)b / 2.;
	
	printf("Triangle area:%.1lf",c);
	
    return 0;
}
