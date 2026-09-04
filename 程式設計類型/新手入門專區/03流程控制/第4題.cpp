#include <stdio.h>
#include<math.h>

int main()
{
	
	
	int n;
	scanf("%d",&n);
	if(n < 0)
    {
    	return 0;
	}
	if(n > 8)
	{
		n = 8;
		int Score[n];
	}
	int Score[n],i,j=0;
	char Subject[100];
    
	for(i = 0;i < n;i++)
	{
		scanf("%s %d",Subject,&Score[i]);
        if(Score[i] > 100)
		{
			Score[i] = 100;
		}
        if(Score[i] < 0)
        {
            Score[i] = 0;
        }
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
