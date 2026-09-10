#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	int i,j,a,b[15],c[15],d[15],e[15],f[15],k=1,max = 0;
	char n[10];
	scanf("%s",n);
	
	a = atoi(n);
	int length = strlen(n);
	
	for(i = 0;i < length;i++)
	{
		b[i] = a / pow(10,length-i-1);
		a = a - (b[i] * pow(10,length-i-1));
	}
	
	for(i = 0;i < length && length >= 2;i++)
	{
		if(i + 1 >= length-1)
		{
			c[i] = (b[i]*10) + b[i+1];
			break;
		}
		c[i] = (b[i]*10) + b[i+1];
	}
	
	for(i = 0;i < length && length >= 3;i++)
	{
		if(i + 1 >= length-2)
		{
			d[i] = (b[i] *100)+(b[i+1]*10) + b[i+2];
			break;
		}
		d[i] = (b[i] *100)+(b[i+1]*10) + b[i+2];
	}
	
	for(i = 0;i < length && length >= 4;i++)
	{
		if(i + 1 >= length-3)
		{
			e[i] = (b[i] *1000) + (b[i+1] *100)+(b[i+2]*10) + b[i+3];
			break;
		}
		e[i] = (b[i] *1000) + (b[i+1] *100)+(b[i+2]*10) + b[i+3];
		//printf("%d ",e[i]);
	}
	
	for(i = 0;i < 5;i++)
	{
		f[i] = b[i];
	}
	
	for(i = 5;i < 9;i++)
	{
		f[i] = c[i-5];
	}
	
	for(i = 9;i < 12;i++)
	{
		f[i] = d[i-9];
	}
	
	for(i = 12;i < 14;i++)
	{
		f[i] = e[i-12];
	}
	
	f[14] = atoi(n);
	/*for(i =0;i < 15 ;i++)
	{
		printf("%d ",f[i]);
		if(i % 5 == 0)
		{
			printf("\n");
		}
	}*/ 
	
	//max = f[0];
	
	for(i = 0;i<15 && f[i] != 0;i++)
	{
		for(j = 2 ;j < f[i];j++)
		{
			if(f[i] % j == 0)
			{
				f[i] = 0;
				break;
			}
		}
		if(max < f[i])
		{
			max = f[i];
		}
	}
	
	
	
	if(max == 0)
	{
		printf("No prime found");
	}
	else
	{
		printf("%d",max);
	}
	
	
	return 0;
}
