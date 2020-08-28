#include<stdio.h> 
#include<stdlib.h> 
#include "linkedList.h"
  
void GetNth(Node*,int); 
  
void GetElements(Node* head,int n) 
{ 
	if(n>0){
		n--;
		printf("%d==>", head->num);
		    if (head->next == NULL)
		    {
		        return;
		    }
	}
    GetElements(head->next,n);	
} 

int main() 
{ 
int num;

Node *myList = makeList();
printList(myList);
getchar();
printf("\n");
GetElements(myList,5);
 
} 
