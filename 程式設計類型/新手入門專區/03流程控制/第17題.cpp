#include <stdio.h>
#include <math.h> 

int main() {
   	int a,i;
   	scanf("%d",&a);
   	int n[a];
   	for(i = 0;i<a;i++)
   	{
   		scanf("%d",&n[i]);	
   		
	}
	for(i = 0;i<a;i++)
	{
		if(n[i] < 18.5)
		{
			printf("體重過輕\n");
		}
		else if(18.5 <= n[i] && n[i] < 24) 
		{
			printf("正常\n");
		}
		else if(24 <= n[i] && n[i] < 28)
		{
			printf("體重過重\n");
		}
		else
		{
			printf("肥胖\n");
		}
	}
	return 0;
}
