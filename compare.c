// This is about compare two int array, whether they have same element

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
	
	int array[5] = {1,2,3,4,17};
	int array1[5] = {1,3,5,7,9}; 
	
	if(compare(5,5,array,array1)) {
		
		printf("This is same element.\n");
	} else {
		
		printf("This is not same element.\n");
	}
	
	return EXIT_SUCCESS;
}

int compare(int a,int b, int array[], int array1[]) {
	
	int i = 0;
	
	// This is for count how many same element they have, in the fianl, if count is zero, there is not same element.
	int count = 0;
	
	while( i < a) {
		
		int j = 0;
		while(j < b) {
			
			if(array[i] == array1[j]) {
				
				count ++;
				
			}
			
			j++;
		}
		i++;
	}
	
	printf("There are: %d\n",count);
	
	if(count != 0) {
		
		return TRUE;
	} else {
		
		return FALSE;
	}
	
}
