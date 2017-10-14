#include <stdio.h>
#include <stdlib.h>
#include "String.h"

typedef struct _string *String;
typedef struct _string {
	char *chars;
	int length;
} string;

int main(int argc, char *argv[]) {
	
	
	char *test = "Hello world";
	char *test1 = "Hallo world";
	
	String s1 = newString(test1);
	String s = newString(test);
	
	printf("%s\n",s -> chars);
	
	s -> length = stringLength(s);
	s1 -> length = stringLength(s1);
	printf("%d\n",s -> length);
	
	String new = stringClone(s);
	printf("%s\n",new -> chars);
	printf("%d\n",new -> length);
	
	char c = stringAt(s,0);
	printf("%c\n",c);
	
	int x = stringFindChar(s,' ');
	printf("%d\n",x);
	
	int t = stringsEqual(s,s1);
	printf("%d\n",t);
	
	/*String combine = stringConcat(s,s1);
	printf("%s\n",combine -> chars);
	*/
	
	
	free(s);
	free(new);
	return EXIT_SUCCESS;
}
