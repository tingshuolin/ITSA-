#include <stdio.h>


int main() {
   	int a,b,c,d;
   	scanf("%d",&a);
   	
   	printf("NT10=%d\n",b = a / 10);
   	a = a - b*10;
   	printf("NT5=%d\n",c = a / 5);
   	a = a - c*5;
   	printf("NT1=%d\n",d = a / 1);
	return 0;
}
