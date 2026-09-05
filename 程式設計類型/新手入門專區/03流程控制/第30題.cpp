#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
   	int flag = 0;
	char n[2];

	scanf("%s", &n);
	
	int length = strlen(n);
	
	for(int i =0;i<=length;i++)
	{
		if(isdigit(n[i]))
		{
			flag = 1;
		}
		if (isalpha(n[i])) 
		{
        	flag = 0;
        	break;
        }
	}
	
	int e = atoi(n);
	
	
	if (atof(n) != (int)(atoi(n))) 
	{
		printf("float\n");
		return 0;	
	}
	
	if (flag == 0 && length < 2) {
		printf("char\n");
		return 0; 
	}	
	
	
   	if(flag == 0 && length >= 2)
	{
		printf("string\n"); 
		return 0;
	}
   	
   	if ((float)e - e == 0) 
	{
		printf("int\n");
		return 0;	
	}
   
	return 0;
}
