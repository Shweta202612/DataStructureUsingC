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

//Insertion at beginning
struct Node * insertAtBeginning(struct Node *head,int data){
	struct Node *new;
	new=(struct Node *)malloc(sizeof(struct Node));
	
	new->data=data;
	new->next=head;
	
return new;	
}

//Insertion At Position
struct Node * insertInBetween(struct Node *head,int data,int pos){
 
struct Node *new1;
	new1=(struct Node *)malloc(sizeof(struct Node));
struct Node *p=head;
int i=1;
while(i!=pos ){
	p=p->next;
	i++;
}
new1->data=data;	
new1->next=p->next;
p->next=new1;
return head;
}

//Insertion before Position
struct Node * insertBeforePosition(struct Node *head,int data,int pos){
 
struct Node *new1;
	new1=(struct Node *)malloc(sizeof(struct Node));
struct Node *p=head;
int i=1;
while(i!=pos-1 ){
	p=p->next;
	i++;
}
new1->data=data;	
new1->next=p->next;
p->next=new1;
return head;
}

//Insertion after Position
struct Node * insertAfterPosition(struct Node *head,int data,int pos){
 
struct Node *new1;
	new1=(struct Node *)malloc(sizeof(struct Node));
struct Node *p=head;
int i=1;
while(i!=pos+1 ){
	p=p->next;
	i++;
}
new1->data=data;	
new1->next=p->next;
p->next=new1;
return head;
}

//Insertion At End
struct Node * insertAtEnd(struct Node *head,int data){
 
struct Node *new1;
	new1=(struct Node *)malloc(sizeof(struct Node));
struct Node *p=head;

while(p->next!=NULL){
	p=p->next;

}
if(p->next==NULL){
new1->data=data;	
new1->next=p->next;
p->next=new1;
}
return head;
}

int main(){


//LINKEDLIST CREATION
    struct Node *head;
    struct Node *first;
    struct Node *second;
    
    head =(struct Node *)malloc(sizeof(struct Node));
    first =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=first;
    
    first->data=30;
    first->next=second;
    
    second->data=50;
    second->next=NULL;
    int num;
    listTraverse(head);
    printf("Enter a number according to thier operation:\n1 for Insert at Beginning\n2 for Insert at given powsition\n3 for Insert before given position \n4 for Insert after given position\n5 for Insert At End.\n");
    scanf("%d",&num);
  int p;

    switch(num){
	case 1: 
    head = insertAtBeginning(head, 56);
    printf("\nAfter insertion:\n");  
    listTraverse(head);
    break;
    
    case 2:
    	printf("Enter position:");
    	scanf("%d",&p);
      head = insertInBetween(head, 56,p);
       printf("\nAfter insertion:\n");  
    listTraverse(head);
    break;
   case 3:
   	printf("Enter position:");
    	scanf("%d",&p);
   	head =insertBeforePosition(head, 40,p);
    printf("\nAfter insertion:\n");  
    listTraverse(head);
    break;
   case 4:
   	printf("Enter position:");
    	scanf("%d",&p);
   	head =insertAfterPosition(head, 41,p);
    printf("\nAfter insertion:\n");  
    listTraverse(head); 
    break;
   	case 5:
   	
   	head =insertAtEnd(head, 60);
    printf("\nAfter insertion:\n");  
    listTraverse(head); 
    break;
    default:
    	printf("Invalid operation.");
    	break;
    }
    	
	return 0;
}
