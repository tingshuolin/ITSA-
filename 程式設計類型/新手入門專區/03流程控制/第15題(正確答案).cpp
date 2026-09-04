#include <stdio.h>

int main()
{
	int n,i,total = 0,flag = 0,flag2 = 0 ,e = 0,input = 2;
	scanf("%d",&n);
	int a[n] ;
	int b[n] ;
	//if(n < 1 || n > 500)
	for(i = 2; e < n;i++)
	{
		b[e] = i;
		for(int j = 2; j<i;j++)
		{
			if(i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			b[e] = 0;
			flag = 0;
		}
		else
		{
			//
			b[e] = i;
			e++;
		}	
	}
	
	for(i = 0; i < n; i++)
	{
		if(b[i] == 0)
		{
			printf("\b ");
			break;
		}
        if(i + 1 >= n)
        {
            printf("%d",b[i]);
            total += b[i];
            break;
        }
        
		printf("%d,",b[i]);
		total += b[i]; 
	}
	printf("\n");
	//printf("%d\n",e);
	printf("%d",total);
	return 0;
}
