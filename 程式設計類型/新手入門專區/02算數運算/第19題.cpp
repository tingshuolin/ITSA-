#include <stdio.h>

int main()
{
	int a,b,r=1,ans;
	scanf("%d %d",&a,&b);
	r = a % b;
	ans = r;
	while(r != 0)
	{
		ans = r;
		if(r == 0)
		{
			break;
		}
		a = b;
		b = r;
		r = a % b;
	}
	printf("%d",ans);
	return 0;
}
