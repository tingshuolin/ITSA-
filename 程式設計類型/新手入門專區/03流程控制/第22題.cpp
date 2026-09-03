#include <stdio.h>

int main() {
   	int x,y;
   	scanf("%d %d",&x,&y);
   	
   	if((x + y) * 2> 200)
   	{
   		printf("outside");	
	}
	else
	{
		printf("inside");
	}
	
	return 0;
}
