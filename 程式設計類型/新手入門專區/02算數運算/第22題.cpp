#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	char b[100];
	scanf("%d",&a);
	sprintf(b,"%x",a);
	strupr(b);
	printf("%s",b);
	return 0;
}

		

