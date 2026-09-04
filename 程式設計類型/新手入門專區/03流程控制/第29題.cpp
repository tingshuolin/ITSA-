#include <stdio.h>


int main() {
   	
   	int n,i,j;
   	scanf("%d",&n);
   	
   	char a[n];
   	char b[9];
   	for(i = 0;i<n;i++)
   	{
   		scanf("%s",&a[i]);	
	}
	scanf("%s",&b);
	for(i = 0;i<n;i++)
   	{
   		printf("%s\n",&a[i]);	
	}
	
	return 0;
}
