#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char *p1 = "Hello world";
	char *p2 ="nihao";
	char *p;
	char array[100];
	
	int i = 0;
	while(p1[i] != '\0') {
		array[i] = p1[i];
		printf("%c",array[i]);
		i++;
	}
	
	printf("\n");
	
	
	int j = 0;
	while (p2[j] != '\0') {
	
		array[i+j] = p2[j];
		printf("%d",i+j);
		j++;
		
	}
	

	array[i+j] = '\0';
	
	printf("\n");
	
	int x = 0;
	while(array[x] != '\0'){
	
		x++;
	}

	printf("%d",x);
	printf("\n");
	
	p = array;
	
	int k = 0;
	while(p[k] != '\0') {
	
		printf("%c",p[k]);
		k++;
	}
	printf("\n");
	
}
