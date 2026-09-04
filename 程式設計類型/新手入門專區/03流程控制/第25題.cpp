#include <stdio.h>


int main() {
   	
   	int n,i,day,total=0;
   	scanf("%d",&n);
   	
   	scanf("%d",&day);
	total = n;
	for(i = 0; i < day;i++)
	{
		total = total * 2;
	}
	printf("第%d天共存%d元",n,total-n);
	return 0;
}
