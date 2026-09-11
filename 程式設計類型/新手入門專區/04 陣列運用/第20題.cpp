#include <stdio.h>
#include <string.h>

int main()
{
	char s[100],t[100];
	int a,b,count = 0,i;
	scanf("%s",s);
	scanf("%s",t);
	a = strlen(s);
	b = strlen(t);
	if(a > b)
	{
		printf("NO");
		return 0;
	}
	
	for(i = 0;i < a;i++)
	{
		if(s[i] == t[i])
		{
			count++;
		}
	}
	
	if(count >= a)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
