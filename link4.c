#include <stdio.h>
#include <stdlib.h>

typedef struct _student *Student;
typedef struct _student {
	
	char name[10];
	int ID;
	Student *next;
} student;

int count;

Student creat() {
	
	count = 0;
	Student pHead = NULL;
	Student pNew,pEnd;

	pNew = calloc(1,sizeof(student));
	pEnd = calloc(1,sizeof(student));
	
	printf("Please enter students information:\n");
	scanf("%s",&pNew -> name);
	scanf("%d",&pNew -> ID);
	
	while(pNew -> ID != 0) {
		
		count ++;
		if(count == 1) {
		
			pNew -> next = NULL;
			pEnd = pNew;
			pHead = pNew;
			
		} else {
			
			pNew -> next = NULL;
			pEnd -> next = pNew;
			pEnd = pNew;
		}
		
		pNew = calloc(1,sizeof(student));
		scanf("%s",&pNew -> name);
		scanf("%d",&pNew -> ID);
		
	}
	
	free(pNew);
	
	return pHead;

}

Student Insert(Student pHead) {
	
	Student pNew = calloc(1,sizeof(student));
	
	printf("---Insert a new student---\n\n");
	scanf("%s",&pNew -> name);
	scanf("%d",&pNew -> ID);
	
	pNew -> next = pHead;
	pHead = pNew;
	count ++;
	
	return pHead;
	
}

/*Student del(Student pHead,int num) {
	
	Student p1,p2;
	p1 = p2 = calloc(1,sizeof(student));
	p1 = pHead;
	
	if(pHead == NULL) {

		printf("List is null\n");
		return(p1);
		
	}
	
	while(num != p1 -> ID && p1 -> next != NULL) {
		
		p2 = p1;
		p1 = p1 -> next;
	}
	
	if(num == p1 -> ID) {
		
		if(p1 == pHead) {
			
			pHead = p1 -> next;
		} else {
			
			p2 -> next = p1 -> next;
			printf("Delete: %d\n", num);
			count = count - 1;
			
			free(p1);
		}
		
	} else {
		
		printf("No find\n");
	}
	
	
}*/

Student Find(int k, Student pHead) {
	
	Student temp = pHead;
	int i = 0;
	
	while(temp != NULL && i < k) {
		
		temp = temp -> next;
		i++;
		
	}
	if(i == k && temp != NULL) {
		
		return temp;
	} else {
		
		return NULL;
	}
}

// 在指定的节点插入链表
Student insert(int node,Student pHead) {
	
	Student pBefore,pAfter,pNew;
	pNew = calloc(1,sizeof(student));
	
	pBefore = Find(node,pHead);
	
	printf("---Insert a another new student---\n\n");
	
		scanf("%s",&pNew -> name);
		scanf("%d",&pNew -> ID);
		
		pAfter = pBefore -> next;
		pBefore -> next = pNew;
		pNew -> next = pAfter;
		
		count++;
		
	return pHead;
	free(pNew);
}

// 在指定的节点删除链表
Student del(int i, Student pHead) {
	
	Student pBefore,pAfter;
	pBefore = Find(i-1, pHead);
	
	if(pBefore -> next == NULL) {
		
		printf("There is not %d\n",i);
		
	} else {
		
		pAfter = pBefore -> next;
		pBefore -> next = pAfter -> next;
		
		free(pAfter);
	}
	
	return pHead;
	
}

void put(Student pHead) {
	
	Student temp;
	temp = pHead;
	int index = 1;
	
	printf("---This list have %d students\n",count);
	printf("\n");
	
	while(temp != NULL) {
		
		printf("The No %d member is :\n",index);
		printf("The name is: %s\n",temp -> name);
		printf("ID number is: %d\n",temp -> ID);
		printf("\n");
		temp = temp -> next;
		index ++;
		
	}
}


int main(int argc,char *argv[]) {
	
	Student pHead;
	
	pHead = creat();
	
	pHead = Insert(pHead);
	
	put(pHead);
	
	pHead = insert(2,pHead);
	
	pHead = del(1,pHead);
	
	put(pHead);
	
	return EXIT_SUCCESS;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

