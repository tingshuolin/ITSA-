#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
   	
   int n,i,j,length,mark,c,d,t,p = 0;
   scanf("%d",&n);
   int a[n] = {0};
   for(i = 0;i < n;i++)
   {
   	scanf("%d",&a[i]);
   }
   length = n;
   
   scanf("%d",&t);
   
   int e[n/t][t];
   for(i = 0;i<n;i++)
   	{
		for(c=0;c<length;c++)
		{
			for(d=c+1;d<length;d++)
			{	
				if(a[c]==a[d])
				{		
					for(mark=d;mark<length;mark++)
						{		
							a[mark]=a[mark+1];		
						}
					length--;	
					d--;	
				}
			}
		}
		
	}
   
   
   
   
   for(i = 0;i < n/t;i++)
   {
   	for(j = 0;j <t;j++)
   	{
   		e[i][j] = a[p];
   		printf("%d",e[i][j]);	
   		p++;
	}
	printf(" ");
   }
   
   
   
	return 0;
}
