#include <stdio.h>

int main() {
   	int a,b,c,x,y;
   	scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
   	
   	if((a * x) + (b * y) + c == 0)
   	{
   		printf("YES");	
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}
