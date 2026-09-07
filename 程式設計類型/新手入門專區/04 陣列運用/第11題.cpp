#include <stdio.h>


int main() {
   	
	int i,n,a = 0,b = 0,c = 0,d = 0,e = 0;
	scanf("%d",&n);
	int score[n];
	for(i = 0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	
	for(i = 0;i<n;i++)
	{
		if(score[i] >= 90 && score[i] <= 100)
		{
			a++;
		}
		else if(score[i] >= 80 && score[i] <= 89)
		{
			b++;
		}
		else if(score[i] >= 70 && score[i] <= 79)
		{
			c++;
		}
		else if(score[i] >= 60 && score[i] <= 69)
		{
			d++;
		}
		else
		{
			e++;
		}
	}
	
	printf("纔单 %d\n",a);
	printf("ヒ单 %d\n",b);
	printf("单 %d\n",c);
	printf("单 %d\n",d);
	printf("ぃの %d\n",e);
	return 0;
}
