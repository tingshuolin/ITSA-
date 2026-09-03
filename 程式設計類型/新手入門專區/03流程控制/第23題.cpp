#include <stdio.h>
#include <string.h>

int main() {
   	int i,j, a[3],tmp = 0;
   	char mode[10];
   	char Asc[10] = "Asc";
   	char Desc[10] = "Desc";
   	for(i = 0;i<3;i++)
   	{
   		scanf("%d",&a[i]);
	}
   	
   	scanf("%s",&mode);
   	if(strcmp(mode, Asc) == 0)
   	{
   		
   		for(i = 0;i<2;i++)
   		{
   			for(j = 0;j < 2 ;j++)
   			{
   				if(a[j] > a[j+1])
				{
					tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;    	
				}	
			}
		}
		printf("%d<%d<%d",a[0],a[1],a[2]);
	}
	
	
	if(strcmp(mode, Desc) == 0)
   	{
   		for(i = 0;i<2;i++)
   		{
   			for(j = 0;j < 2 ;j++)
   			{
   				if(a[j] < a[j+1])
				{
					tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;    	
				}	
			}
		}
		printf("%d>%d>%d",a[0],a[1],a[2]);
	}
   	
   	
	return 0;
}
