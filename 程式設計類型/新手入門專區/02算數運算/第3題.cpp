#include <stdio.h>
#include<math.h>

int main()
{
	int a,i;
	
	//printf("輸入幾個正方形:");
	scanf("%d",&a);
	double b[a];
	for(i = 0;i<a;i++)
	{
		scanf("%lf",&b[i]);
	}
	for(i = 0;i<a;i++)
	{
		b[i] = b[i] * b[i];
         ;
		printf("%.1lf\n",round(b[i] * 10) / 10);
	}
	
    return 0;
}
