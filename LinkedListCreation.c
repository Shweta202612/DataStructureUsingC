#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
void listTraversal(struct Node *ptr);


int main(){
	struct Node *head, *second, *third;
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	
	head->data=77;
	head->next=second;
	
	second->data=23;
	second->next=third;
	
	third->data=99;
	third->next=NULL;
	
	listTraversal(head);
	
	return 0;
}
//This is for Travers and display LinkedList Elements
listTraversal(struct Node *ptr){
	while(ptr!=NULL){
		int i=1;
		printf("Element %d:",i);
		printf("%d\n",ptr->data);
		i++;
		ptr=ptr->next;
	}}

