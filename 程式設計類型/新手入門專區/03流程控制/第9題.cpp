#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	if(x == 3 || x == 4 || x == 5)
	{
		printf("Spring");
	}
	else if(x == 6 || x == 7 || x == 8)
	{
		printf("Summer");
	}	
	else if(x == 9 || x == 10 || x == 11)
	{
		printf("Autumn");
	}
	else
	{
		printf("Winter");
	}
	
	
	return 0;
}
