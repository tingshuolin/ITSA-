#include <stdio.h>

int main()
{
	int i;
	char a[4];
	
	scanf("%s",&a[i]);
	
	
	
	
	for(i = 3;i >= 0;i--)
	{
		printf("%c",a[i]);
		if(i > 0)
        {
            printf(",");
        }
		if(i < 0)
		{
			printf("\b \n");
			break;
		}
        
	}
	printf("\n");
	return 0;
} 
