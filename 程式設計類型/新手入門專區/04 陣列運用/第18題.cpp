#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,a,Uppercase[26],lowercase[26],Count[26];
	char n[200];
	fgets(n, sizeof(n), stdin);
	
	for(i =0; i<26;i++)
	{
		Uppercase[i] = i+65;
		lowercase[i] = i+97;
		Count[i] = 0;
	}
	
	
	
	int length = strlen(n)-1;
	
	for(i = 0;i <length;i++)
	{
		for(j =0;j<26;j++)
		{
			
			if(lowercase[j] == (int)(n[i]))
			{
				Count[j]++;
				break;
			}
		}
	}
	
	for(i = 0;i <length;i++)
	{
		for(j =0;j<26;j++)
		{
			//printf("%d %d\n",Uppercase[j],(int)(n[i]));
			if(Uppercase[j] == (int)(n[i]))
			{
				Count[j]++;
				break;
			}
		}
	}
	
	for(i = 0;i < 26;i++)
	{
		printf("%d ",Count[i]);
	}
	
	//printf("\n%d",length);
	return 0;
}
