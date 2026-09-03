#include <stdio.h>
#include <ctype.h>

int main()
{
	int a;
	char b[100];
	scanf("%d",&a);
	sprintf(b,"%x",a);
	for(int i=0;i<100;i++)
	{
		if(b[i] == '\0')
		{
			break;
		}
		printf("%c",toupper(b[i]));
	}
	
	return 0;
}

		

