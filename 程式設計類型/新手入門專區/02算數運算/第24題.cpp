#include <stdio.h>


int main()
{
	int Inputdata,Start[100],TheEnd[100],Numberofitems[100],i,j,tmp,total[100];
	scanf("%d",&Inputdata);
	for(i = 0;i < Inputdata;i++)
	{
		scanf("%d %d",&Start[i],&TheEnd[i]);
	}
	for(i = 0;i < Inputdata;i++)
	{
		if(Start[i] > TheEnd[i])
		{
			tmp = Start[i];
			Start[i] = TheEnd[i];
			TheEnd[i] = tmp;
		}
	}
	
	for(j = 0 ;j < Inputdata;j++)
	{
		for(i = Start[j];i<=TheEnd[j]-Start[j]+1;i++)
		{
			Numberofitems[j] = i;
			
		}
	}
	
	for(i = 0;i < Inputdata;i++)
	{
		total[i] = (Start[i] + TheEnd[i]) * Numberofitems[i] / 2;
		printf("%d\n",total[i]);
	}
	return 0;
}

		

