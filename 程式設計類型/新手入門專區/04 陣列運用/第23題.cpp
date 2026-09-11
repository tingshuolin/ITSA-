#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,year;
	char a[12][8] ={{"rat"},{"ox"},{"tiger"},{"rabbit"},{"dragon"},{"snake"},{"horse"},{"sheep"},{"monkey"},{"rooster"},{"dog"},{"pig"}};
	
	scanf("%d",&n);
	
	year = (n  - 2010)% 12;
	
	if(year < 0)
	{
		year += 12;
	}
	
	switch(year)
	{
	case 0: 
		printf("tiger\n");
		break;
	case 1: 
		printf("rabbit\n");
		break; 
	case 2: 
		printf("dragon\n");
		break; 
	case 3: 
		printf("snake\n");
		break;
	case 4: 
		printf("horse\n");
		break; 
	case 5: 
		printf("sheep\n");
		break;
	case 6: 
		printf("monkey\n");
		break;  
	case 7: 
		printf("rooster\n");
		break;
	case 8: 
		printf("dog\n");
		break; 
	case 9: 
		printf("pig\n");
		break; 
	case 10: 
		printf("rat\n");
		break; 
	case 11: 
		printf("ox");
		break;	
	}


	return 0;
}
