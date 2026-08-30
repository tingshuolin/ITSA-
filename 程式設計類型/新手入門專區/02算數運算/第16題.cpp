#include <stdio.h>
#include <math.h> 

int main() {
   	int AM1,AM2,PM1,PM2,a,b,total,tag = 0,tim,c;
   	
   	scanf("%d %d",&AM1,&AM2);
   	
   	scanf("%d %d",&PM1,&PM2);
   	
   	a=0;
   	b=0;
   	
   	if(AM1 > PM1)
   	{
   		a = AM1 - PM1;
	}
	else
	{
		a = PM1 - AM1;
	}
   	if(AM2 > PM2)
   	{
   		b = AM2 - PM2;
	}
	else
	{
		b = PM2 - AM2;
	}
	tim = 2 * a;//ºâ¥b¤p®É 
	if(a <= 2)
	{
		
		total = tim * 30;
		tag = 1;
	}
	else
	{
		tim = tim - 4;
		total = 4 * 30;
		if(a <= 4)
		{
			total = total + (tim * 40);	
			tag =2;
		}
		else
		{
			tim = tim - 8;
			
			total = total + 4 * 30;
			total = total + 4 * 40;
			total = total + (tim * 60);
			tag =3;
		}
	}
	if(b >= 30 )
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
