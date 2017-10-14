#include <stdio.h>
#include <stdlib.h>
#include "String.h"

typedef struct _string {
	char *chars;
	int length;
} string;

String newString (char *str) {

	String new = calloc(1,sizeof(string));
	
	if(new == NULL) {
		exit(EXIT_FAILURE);
	}
	
	new -> chars = str;
	return new;
	
}

void destroyString (String s) {
	free(s);
}

int stringLength (String s) {

	int i = 0;
	while(s -> chars[i] != '\0') {
		i++;
	}
	
	return i;
}

String stringClone (String s) {
	
	int i = 0;
	String new = newString(s -> chars);
	
	new -> length = s -> length;
	return new;
	
}

char stringAt (String s, int index) {
	
	return s -> chars[index];
}

int stringFindChar (String s, char find) {
	
	int i = 0;
	while(s -> chars[i] != '\0') {
		if(s -> chars[i] == find) {
			return i;
		}
		i++;
	}
	return -1;
}

int stringsEqual (String s1, String s2) {

	int i = 0,count = 0;
	int x,y;
	x = stringLength(s1);
	y = stringLength(s2);
	
	if(x != y) {
		return -1;
	} else {
		while(s1 -> chars[i] != '\0') {
			if(s1 -> chars[i] == s2 -> chars[i]) {
				count = 0;
			} else {
				count = 1;
				return -1;
			}
			i++;
		}
	}
 	
 	return 1;
}

String stringConcat (String s1, String s2) {
	
	int i = 0, j = 0;
	String combine = calloc(1,sizeof(string));
	char array[100];
	
	while(s1 -> chars[i] != '\0') {
	
		array[i] = s1 -> chars[i];
		i++;
	}
	
	while(s2 -> chars[j] != '\0') {
	
		array[i+j] = s2 -> chars[j];
		j++;
	}
	array[i+j] = '\0';
	
	combine -> chars =array;
	
	return combine;
	
}


