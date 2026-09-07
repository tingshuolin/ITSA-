#include <stdio.h>


int main() {
   	
	int i,n,max,min,pass = 0,total = 0;
	double Average;
	scanf("%d",&n);
	int score[n];
	for(i = 0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	
	max = score[0];
	min = score[0];
	
	for(i = 0;i<n;i++)
	{
		if(max < score[i])
		{
			max = score[i];
		}
		if(min > score[i])
		{
			min = score[i];
		}
		total += score[i];
	}
	
	Average = (double)total / n;
	
	for(i = 0;i < n;i++)
	{
		if(score[i] > Average)
		{
			pass++;
		}
	}
	
	printf("Max:%d\n",max);
	printf("Min:%d\n",min);
	printf("Average:%.1lf\n",Average);
	printf("Pass:%d\n",pass);
	
	return 0;
}
