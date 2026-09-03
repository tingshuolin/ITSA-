#include <stdio.h>
#include<math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	
	int n;
	scanf("%d",&n);
	int Score[n],i,j=0;
	char Subject[100];
	for(i = 0;i < n;i++)
	{
		scanf("%s %d",Subject,&Score[i]);
		if(Score[i] >= 60)
		{
			printf("%s\n",Subject);
			j++;
		}
	}
	
	if((double)j >= ceil((n / 2.)))
	{
		printf("®Ê¯Å\n");
	}
	else
	{
		printf("¥¢±Ñ\n");
	}
	return 0;
}
