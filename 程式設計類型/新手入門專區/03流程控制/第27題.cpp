#include <stdio.h>


int main() {
   	
   	int a,b,i,j;
   	scanf("%d %d",&a,&b);
   	for(i = 1;i <= a;i++)
   	{
   		for(j = 1;j <= b; j++)
		{
			printf("%dx%d=%d\n",i,j,i*j);   	
		}	
	}
	return 0;
}
