#include <stdio.h>
#include<math.h>

int main()
{
	int a,i;
	
	scanf("%d",&a);
	int b[10],c[10],d[10];
	
	for(i = 0;i<a;i++)
	{
		scanf("%d %d",&b[i],&c[i]);
	}
	for(i = 0;i<a;i++)
	{
		d[i] = b[i] + c[i];
		printf("%d\n",d[i]);
	}
	
    return 0;
}
