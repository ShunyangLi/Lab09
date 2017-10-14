// Practice question for my cs1511 class
// I won't release solutions, you have to come to my thu13-sitar or fri09-sitar class
/*
  Write a function that determines the order of an array. Return ASCENDING if ascending, DESCENDING if DESCENDING,
  or UNDETERMINED if neither. Adjacent duplicates are considered both ascending and descending.
*/

#include <stdio.h>
#include <assert.h>

#define ASCENDING 1
#define DESCENDING 2
#define UNDETERMINED 3

/*
  EDIT THIS FUNCTION ONLY
*/
int determineOrder(int * array, int size){
	
	int i,temp = array[0],j;
	int min = array[0];
	if(size == 1) {
		
		return UNDETERMINED;
	}
	
	for(i = 0; i < size; i++) {
		
		if(temp <= array[i]) {
			
			temp = array[i];
		}
	}
	
	for(j = 0; j < size; j++) {
		
		if(min >= array[j]) {
			
			min = array[j];
		}
	}
	
	if(temp == array[size - 1] && temp != array[size - 2]) {
		
		return ASCENDING;
	}
	
	if(min == array[size - 1] && min != array[size - 1]) {
		
		return DESCENDING;
		
	}
	
	
  	return UNDETERMINED;
}

int main(){
  int a1[] = {1,2,3,4,5};
  int a2[] = {1,5};
  int a3[] = {1,2,432,524,999};
  int d1[] = {65,32,1};
  int d2[] = {9,8,7,6};
  int d3[] = {3,3,3,2};
  int u1[] = {1,2,3,4,5,4};
  int u2[] = {1,1,1,1};
  int u3[] = {1};

  assert(determineOrder(a1, sizeof(a1)/sizeof(int)) == ASCENDING);
  assert(determineOrder(a2, sizeof(a2)/sizeof(int)) == ASCENDING);
  assert(determineOrder(a3, sizeof(a3)/sizeof(int)) == ASCENDING);

  assert(determineOrder(d1, sizeof(d1)/sizeof(int)) == DESCENDING);
  assert(determineOrder(d2, sizeof(d2)/sizeof(int)) == DESCENDING);
  assert(determineOrder(d3, sizeof(d3)/sizeof(int)) == DESCENDING);

  assert(determineOrder(u1, sizeof(u1)/sizeof(int)) == UNDETERMINED);
  assert(determineOrder(u2, sizeof(u2)/sizeof(int)) == UNDETERMINED);
  assert(determineOrder(u3, sizeof(u3)/sizeof(int)) == UNDETERMINED);

  printf("Well done, you passed the tests, however you should make more of them\n");
}
