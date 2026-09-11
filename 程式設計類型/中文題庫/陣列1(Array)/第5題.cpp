#include <stdio.h>

int main()
{
	int n,i,j,index = 0,max = 0,Atthesametime = 0;
	
	scanf("%d",&n);
	
	int Start[n], End[n];
	
	for(i = 0;i < n;i++)
	{
		scanf("%d %d",&Start[i],&End[i]);
		
	}
	
	
	for (i = 1; i <= 24; i++)
	{
    	Atthesametime = 0;

    	for (j = 0; j < n; j++)
    	{
        	if (Start[j] <= i && i < End[j])
        	{
            	Atthesametime++;
        	}
    	}

    	if (max < Atthesametime)
    	{
        	max = Atthesametime;
    	}
	}
	
	
	
	
	printf("%d",max);
	
    return 0;
}
