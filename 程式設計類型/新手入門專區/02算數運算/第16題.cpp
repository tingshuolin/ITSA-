#include <stdio.h>
#include <math.h> 

int main() {
   	int S1,S2,E1,E2,a,b,total,tag = 0,tim,totalmin;
   	
   	scanf("%d %d",&S1,&S2);
   	
   	scanf("%d %d",&E1,&E2);
   	
   	a=0;
   	b=0;
   	
   	if(S1 > E1)
   	{
   		a = S1 - E1;
	}
	else
	{
		a = E1 - S1;
	}
	
	if(S1 > E2)
   	{
   		a = a - 1;
   		b = S2+60 - E2;
	}
	else
	{
		a = a - 1;
		b = E2 +60 - S2;
	}
   	if(a < 0)
   	{
   		a = 0;	
	}
	totalmin = a * 60 + b;
	
	if(b >= 60)
	{
		a = a + 1;
		b = 0;
	}
	//printf("%d %d\n",a,b);
	tim = 2 * a;//ºâ¥b¤p®É 
	
	if(totalmin <= 120)
	{
		total = tim * 30;
		tag = 1;
	}
	if(totalmin > 120 && totalmin <= 240)
	{
		tim = tim - 4;
		total = 120;
		total = total + (tim * 40);	
		tag =2;
	}
	if(totalmin > 240)
	{
		tim = tim - 8;
		total = 120 + 160;
		total = total + (tim * 60);
		tag =3;
	}
	
	if(b >= 30)
	{
		if(tag == 1)
		{
			total = total + 30;
		}
		if(tag == 2)
		{
			total = total + 40;
		}
		if(tag == 3)
		{
			total = total + 60;
		}
	}
		
	printf("%d",total);
	return 0;
}
