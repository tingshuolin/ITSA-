#include <stdio.h>


int main() {
   	
	int i,j = 0,k,n;
	int Chinese = 0,Math = 0,English = 0,total = 0;
	double average,Chineseaverage,Mathaverage,Englishaverage;
	scanf("%d",&n);
	int a[n][3];
	
	for(i = 0;i <n;i++)
	{
		for(j = 0;j < 3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i = 0;i <n;i++)
	{
		for(j = 0;j < 1;j++)
		{
			Chinese += a[i][j];
		}
	}
	
	for(i = 0;i <n;i++)
	{
		for(j = 1;j < 2;j++)
		{
			English += a[i][j];
		}
	}
	
	for(i = 0;i <n;i++)
	{
		for(j = 2;j < 3;j++)
		{
			Math += a[i][j];
		}
	}
	
	for(i = 0;i <n;i++)
	{
		for(j = 0;j < 3;j++)
		{
			total += a[i][j];
		}
	}
	
	average = (double)total / n / 3.;
	Chineseaverage = (double)Chinese / n;
	Englishaverage = (double)English / n;
	Mathaverage = (double)Math / n;
	
	printf("%.1lf ",average);
	printf("%.1lf ",Chineseaverage);
	printf("%.1lf ",Englishaverage);
	printf("%.1lf",Mathaverage);
	
	
	return 0;
}
