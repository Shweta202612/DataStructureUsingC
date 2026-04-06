#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};

void listTraverse(struct Node *ptr){
	int i=1;
	while(ptr!=NULL){
		printf("Element %d: ",i);
		printf("%d\n",ptr->data);
		ptr=ptr->next;
		i++;
	}
}

//Deletion of node at beginning
struct Node * deleteAtBeginning(struct Node *head){
	struct Node *ptr=head;
	head=ptr->next;
	free(ptr);
	return head;
}

//Delete of node at given position
struct Node * deleteAtPos(struct Node *head,int pos){
	struct Node *ptr=head;
	int i=1;
	while(i<pos-1){
		ptr=ptr->next;
		i++;
	}
	struct Node *q=ptr->next;
	ptr->next=q->next;
	free(q);
	return head;
}
//Delete of node before given position
struct Node *deleteBeforePos(struct Node *head,int pos){
	struct Node *ptr=head;
	int i=1;
	while(i<pos-2){
		ptr=ptr->next;
		i++;
	}
	struct Node *q=ptr->next;
	ptr->next=q->next;
	free(q);
	return head;
}
//Delete of node after given position
struct Node * deleteAfterPos(struct Node *head,int pos){
	struct Node *ptr=head;
	int i=1;
	while(i<pos){
		ptr=ptr->next;
		i++;
	}
	struct Node *q=ptr->next;
	ptr->next=q->next;
	free(q);
	return head;
}

//Delete node at end
struct Node * deleteAtEnd(struct Node *head){
	
	struct Node *ptr=head;
	struct Node *q=head->next;
	while(q->next!=NULL){
		ptr=ptr->next;
		q=q->next;
	}
ptr->next=q->next;
	free(q);
	
	return head;
}
int main(){


//LINKEDLIST CREATION
    struct Node *head;
    struct Node *first;
    struct Node *second;
     struct Node *third;
    
    head =(struct Node *)malloc(sizeof(struct Node));
    first =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=first;
    
    first->data=30;
    first->next=second;
    
    second->data=50;
    second->next=third;
    
    third->data=99;
    third->next=NULL;
    
   listTraverse(head);
   int num;
   printf("Enter a number according to thier operation:\n1 for Delete at Beginning\n2 for Delete at given powsition\n3 for Delete before given position \n4 for Delete after given position\n5 for Delete At End.\n");
    scanf("%d",&num);
  int p;

    switch(num){
	case 1: 
    head = deleteAtBeginning(head);
    printf("\nAfter Deletetion:\n");  
    listTraverse(head);
    break;
    
    case 2:
    	printf("Enter position:");
    	scanf("%d",&p);
      head = deleteAtPos(head,p);
       printf("\nAfter Deletetion:\n");  
    listTraverse(head);
    break;
   case 3:
   	printf("Enter position:");
    	scanf("%d",&p);
   	head =deleteBeforePos(head,p);
    printf("\nAfter Deletetion:\n");  
    listTraverse(head);
    break;
   case 4:
   	printf("Enter position:");
    	scanf("%d",&p);
   	head =deleteAfterPos(head,p);
    printf("\nAfter Deletetion:\n");  
    listTraverse(head); 
    break;
   	case 5:
   	head =deleteAtEnd(head);
    printf("\nAfter Deletetion:\n");  
    listTraverse(head); 
    break;
    default:
    	printf("Invalid operation.");
    	break;
    }
    	
	return 0;
}

