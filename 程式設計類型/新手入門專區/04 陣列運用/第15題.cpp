#include <stdio.h>

int main()
{
	int i,j,n = 0;
	
	
	
	int a[100];
	
	while (scanf("%d", &a[n]) == 1)
	{
    	n++;
	}
	for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
	
	int count = 0 ,flag = 0;

	
	for(i = 0;i < n;i++)
	{
		
		//因為到了最後一顆：

		//如果它跟前面相同 → count++
		//如果前面那組只有 1 顆 → 現在變成 2 顆，就是答案
		//如果前面已經有 2 顆 → 現在變成 3 顆，不是答案
		if(i + 1 >= n )
		{
			count++;

    		if(count == 2)
    		{
        		printf("%d",a[i]);
    		}

    		break;
		}
		
		if(a[i] == a[i+1])
		{
			count++;
		}
		else
		{
			flag = 1;
			count++;
		}
		
		if(flag == 1)
		{
			if(count == 2)
			{
				printf("%d",a[i]);
				break;
			}
			else
			{
				flag = 0;
				count = 0;
			}
		}
		
		
	}
	
	
	
    return 0;
}
