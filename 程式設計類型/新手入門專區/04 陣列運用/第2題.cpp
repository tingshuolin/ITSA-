#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
   	
   int n,i,j,length,mark,c,d,t,p = 0,y;
   long long input;
   scanf("%d",&n);
   int a[n] ;
   
   scanf("%lld",&input);
   
   for(i = 0;i <n;i++)
   {
   	a[i] =  input / pow(10,(n - i-1));
	input = input - (a[i] * pow(10,n-i-1));
	  
    }
   length = n;
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
   
   scanf("%d",&t);
   
   y = ceil(n/t);
   
   if(n%t != 0)
   {
   	y = y +1;
   }
   
   int e[y][t];
	
   
   for(i = 0;i < y;i++)
   {
   	for(j = 0;j <t;j++)
   	{
   		if(a[p] < 0 || a[p] > 9)
   		{
   			break;
		}
   		if(p + 1 >= n)
   		{
   			e[i][j] = a[p];
   			printf("%d",e[i][j]);	
   			break;
		}
   		e[i][j] = a[p];
   		printf("%d",e[i][j]);	
   		p++;
	}
	printf(" ");
   }
   
	return 0;
}
