#include <stdio.h>
#include <string.h>

int main()
{
	// = {"dog","ª¯","cat","¿ß","duck","Àn","cow","¤û","fox","ª°"}
	char a[5] ;
	char b[5] = "dog";
	char c[5] = "ª¯";
	char d[5] = "cat";
	char e[5] = "¿ß";
	char f[5] = "duck";
	char g[5] = "Àn";
	char h[5] = "cow";
	char i[5] = "¤û";
	char j[5] = "fox";
	char k[5] = "ª°";
	
	scanf("%s",&a);
	if(strcmp(a, b) == 0)
	{
		printf("ª¯");
	}
	if(strcmp(a, c) == 0)
	{
		printf("dog");
	}
	if(strcmp(a, d) == 0)
	{
		printf("¿ß");
	}
	if(strcmp(a, e) == 0)
	{
		printf("cat");
	}
	if(strcmp(a, f) == 0)
	{
		printf("Àn");
	}
	if(strcmp(a, g) == 0)
	{
		printf("duck");
	}
	if(strcmp(a, h) == 0)
	{
		printf("¤û");
	}
	if(strcmp(a, i) == 0)
	{
		printf("cow");
	}
	if(strcmp(a, j) == 0)
	{
		printf("ª°");
	}
	if(strcmp(a, k) == 0)
	{
		printf("fox");
	}

	
	return 0;
} 
