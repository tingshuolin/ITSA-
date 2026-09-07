#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
   	
	int i,j = 0,n,e;
	
	
	char input[100],b[100];
	
	scanf("%s",input);
	//printf("%s",input);

	for(i = 0;input[i] != '\0';i++)
	{
		if(input[i] != ',')
		{
			
			b[j] = input[i];
			j++;
		}
	}
	n = strlen(b);

	int max = 0,min = 0,a[n],total = 0;
	
	b[j] = '\0';
	e = atoi(b);
	for(i =0;i<n;i++)
	{
		a[i] = e / (pow(10,n-i-1));
		e = e - (a[i] * pow(10,n-i-1));
	}
	for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        } 
    }
   
   
   	
	for(i =0;i < n;i++)
	{
		
		min = min + (a[i] * pow(10,n-i-1));
	}
	
	for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (a[j] < a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        } 
    }
	

	
	for(i =0;i < n;i++)
	{
		
		max = max + (a[i] * pow(10,n-i-1));
	}
	
	total = max - min;
	
	printf("%d",total);
	return 0;
}
