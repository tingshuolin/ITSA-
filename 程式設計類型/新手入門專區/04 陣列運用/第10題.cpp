#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
   	
	int i,j = 0,n,Price;
	scanf("%d",&n);
	int Currencyvalue[n],Coinslot[n];
	
	for(i =0;i<n;i++)
	{
		scanf("%d",&Currencyvalue[i]);
	}
	
	scanf("%d",&Price);
	
	if(Price > Currencyvalue[2])
	{
		Coinslot[2] = Price / Currencyvalue[2];
		Price = Price - Coinslot[2] * 10; 
	}
	if(Price > Currencyvalue[1])
	{
		Coinslot[1] = Price / Currencyvalue[1];
		Price = Price - Coinslot[1] * 5; 
	}
	if(Price > Currencyvalue[0])
	{
		Coinslot[0] = Price / Currencyvalue[0];
		Price = Price - Coinslot[0] * 1; 
	}
	
	printf("(%d,%d,%d,",Coinslot[0],Coinslot[1],Coinslot[2]);
	printf("\b)\n");
	
	return 0;
}
