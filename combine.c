#include <stdio.h>
#include <stdlib.h>

char stringConcat(char *s1,char *s2,char array[]);

int main(int argc, char *argv[]) {
	
	char *test = "Hello";
	char *test1 = " World";
	char array[100];
	
	stringConcat(test,test1,array);
	
	int i = 0;
	while(array[i] != '\0') {
		
		printf("%c",array[i]);
		i++;
	}
	printf("\n");
	
}

char stringConcat(char *s1,char *s2,char array[]) {
	
	int i = 0, j = 0;
	
	while(s1[i] != '\0') {
	
		array[i] = s1[i];
		i++;
	}
	
	while(s2[j] != '\0') {
	
		array[i+j] = s2[j];
		j++;
	}
	array[i+j] = '\0';
}
