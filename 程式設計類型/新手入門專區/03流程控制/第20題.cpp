#include <stdio.h>
#include <math.h>
int main() {
   	int a,b,c;
   	scanf("%d %d %d",&a,&b,&c);
   	
   	if(a + b <= c || b + c <= a || a + c <= b)
   	{
   		printf("Not Triangle");
	}
	else
	{
		if(pow(a,2) + pow(b,2) == pow(c,2) || pow(b,2) + pow(c,2) == pow(a,2) || pow(a,2) + pow(c,2) == pow(b,2))
		{
			printf("Right Triangle");
			return 0;
		}
		if(pow(a,2) + pow(b,2) < pow(c,2) || pow(b,2) + pow(c,2) < pow(a,2) || pow(a,2) + pow(c,2) < pow(b,2))
		{
			printf("Obtuse Triangle");
			return 0;
		}
		if(pow(a,2) + pow(b,2) > pow(c,2) || pow(b,2) + pow(c,2) > pow(a,2) || pow(a,2) + pow(c,2) > pow(b,2))
		{
			printf("Acute Triangle");
			return 0;
		}
		
		
	}
	
	return 0;
}
