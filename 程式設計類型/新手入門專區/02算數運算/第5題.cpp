#include <stdio.h>
#include<math.h>
 
int main()
{
	int a,b,c,q,r;
	double d;
	while(1)
	{
		scanf("%d %d",&a,&b);
		if(b == 0)
		{
			printf("ERROR");
		}
		printf("%d+%d=%d\n",a,b,c = a + b);
		printf("%d*%d=%d\n",a,b,c = a * b);
		printf("%d-%d=%d\n",a,b,c = a - b);
		q = a/b;
		r = a%b;
		
		if (r < 0)
		{
    		q--;
    		r += b;
		}
		printf("%d/%d=%d...%d\n",a,b,q,r);
		break;
	}
	
    return 0;
}
