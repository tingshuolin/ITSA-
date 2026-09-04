#include <stdio.h>
#include <string.h>

int main() {
   	
   	int n,i,j,total = 0,Start[10] = {0},Feature = 0,k,c,d;
   	scanf("%d",&n);
   	int length,mark;
   	
   	char a[n][9];
   	char b[10] = {0};
   	for(i = 0;i<n;i++)
   	{
   		scanf("%s",&a[i]);	
   		length= 3;
		for(c=0;c<length;c++)
		{
			for(d=c+1;d<length;d++)
			{	
				if(a[i][c]==a[i][d])
				{		
					for(mark=d;mark<length;mark++)
						{		
							a[i][mark]=a[i][mark+1];		
						}
					length--;	
					d--;	
				}
			}
		}
		
	}
	
	scanf("%s",&b);
	int need = strlen(b);
	for(i = 0;i<9;i++)
	{
		if(b[i] == '1')
		{
			Start[i] = '1';
		}
		if(b[i] == '2')
		{
			Start[i] = '2';
		}
		if(b[i] == '3')
		{
			Start[i] = '3';
		}
		if(b[i] == '4')
		{
			Start[i] = '4';
		}
		if(b[i] == '5')
		{
			Start[i] = '5';
		}
		if(b[i] == '6')
		{
			Start[i] = '6';
		}
		if(b[i] == '7')
		{
			Start[i] = '7';
		}
		if(b[i] == '8')
		{
			Start[i] = '8';
		}
		if(b[i] == '9')
		{
			Start[i] = '9';
		}
	}
	
	
	for(i = 0;i<n;i++)
	{
		
		for(j = 0; j<9;j++)
		{
			if(a[i][j] == '\0')
			{
				break;
			}
			for(k = 0;k <9;k++)
			{
			
				if(a[i][j] == Start[k])
				{
					Feature++;
					//printf("%d\n" ,total);
				}
				
			}		
		}
		
		//printf("%d\n" ,maxFeature);
		if(Feature == 3)
		{
			Feature = 0;
			continue;
		}
		if(Feature == need)
		{
			total++;
			Feature = 0;
		}
		else
		{
			Feature = 0;
		}
		
	}
	printf("%d\n" ,total);
	//printf("%d\n" ,Feature);
	return 0;
}
