#include <stdio.h>


int main() {
   	
	int i,j,n,flag = 0,p=0;
	scanf("%d",&n);
	int Green[5],Friend[n][5],b[5];
	
	for(i = 0;i<5;i++)
	{
		scanf("%d",&Green[i]);
	}
	for(i = 0;i<n;i++)
	{
		for(j =0;j<5;j++)
		{
			scanf("%d",&Friend[i][j]);
		}
		
	}
	
	
	
	for(i = 0;i<n;i++)
	{
		for(j =0;j<5;j++)
		{
			if(Green[j] == Friend[i][p])
			{
				flag ++;
				Green[j] = 0;
			}
		}
		p++;
		if(p > 5)
		{
			p = 0;
		}
		else
		{
			i--;
		}
	}
	
	
	
	
	printf("%d",flag);
	
	
	return 0;
}
