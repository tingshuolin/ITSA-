#include <stdio.h>


int main() {
   	
   	int a,b,c,total;
   	scanf("%d %d %d",&a,&b,&c);
   	
   	if(a + b + c >9)
   	{
   		printf("%d H",a + b + c);	
	}
	else
	{
		printf("%d L",a + b + c);
	}
	return 0;
}
