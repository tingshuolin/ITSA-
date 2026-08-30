#include <stdio.h>
#include <math.h> 

int main() {
   	int w,h;
   	double c;
   	scanf("%d %d",&w,&h);
   	
   	//c= (double)pow(h,2);
   	c =  (double)w/ (double)pow(h,2);
   	printf("%.2lf",c*10000);
	return 0;
}
