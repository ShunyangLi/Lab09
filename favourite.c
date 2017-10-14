// This required if it is 17, then it is favourite number,
// If it is, then return TURE, otherwise return FALSE
// int array is different to char array,
// 今天我给你讲一下怎么正确的使用int类型的数组。
// 2017-09-26

#include <stdio.h>
#include <stdlib.h>


#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
	
	int array[5] = {1,2,3,4,17};
	
	if(favourite(5,array)) {
		
		printf("This is my favourite number.\n");
	} else {
		
		printf("This is not my favourite number.\n");
	}
	
	return EXIT_SUCCESS;
}

int favourite(int num, int array[]) {
	
	int i = 0;
	
	while(i < num) {
		
		if(array[i] % 17 == 0) {
			
			return TRUE;
		}
		
		i++;
	}
	
	return FALSE;
}
