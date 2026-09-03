#include <stdio.h>

int main()
{
	int x,Hundredyuan,Tenyuan,Oneyuan;
	scanf("%d",&x);
	Hundredyuan = x / 100;
	x = x - Hundredyuan * 100;
	Tenyuan = x / 10;
	x = x - Tenyuan * 10;
	Oneyuan = x / 1;
	
	printf("百元 %d\n",Hundredyuan);
	printf("十元 %d\n",Tenyuan);
	printf("壹元 %d\n",Oneyuan);
	
	return 0;
}
