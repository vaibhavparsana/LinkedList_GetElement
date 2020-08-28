#include <stdio.h>
#include <stdlib.h>
typedef struct myStruct{
	int num;
	struct myStruct *next;	
}Node;
Node* makeNode(int n){
	Node  *element;
	element =   (Node*) malloc(sizeof(Node));
	element->num = n;
	element->next = NULL;
	return element;
}

void printList(Node *top){
	
	Node *head = top;
	while (head != NULL){    // head->next != NULL
	    printf("%d==>",head->num);
	    head = head->next;
	}
}
 main (){
	
	Node *head=NULL,*np,*last;
	int num;
	int c;
	 for (c = 1; c <= 25; c++) {
    num = rand() % 100 + 1;
    printf("%d\n", num);
 
    	np = makeNode(num);
    	if (head== NULL)
    	   head = np;
    	else
    		last->next = np; 
		last = np;  	
	}
	printList(head);
getchar();
}
