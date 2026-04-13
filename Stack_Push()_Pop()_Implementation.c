#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack *p){
	if(p->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct stack *p){
	if(p->top==p->size){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct stack *p,int val){
	if(isFull(p)){
		printf("\nStack overflow ! Cannont push %d in the stack.\n",val);
	}
	else{
		p->top++;
		p->arr[p->top]=val;
		printf("\nValue %d pushed in the stack!.\n",val);
	}
}

//Method to Pop value from the stack
void pop(struct stack *p){
	int val;
	if(isEmpty(p)){
		printf("\nStack Underflow ! Cannont pop value from  the stack.\n");
		
	}
	else{
		val=p->arr[p->top];
		p->top--;
		printf("\nValue %d poped from the stack!.\n",val);
	}
}


int main(){
	struct stack *s=(struct stack *)malloc(sizeof(struct stack));
	s->size=8;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int));
	
	
	printf("Enter the number for which operation you want to perform on the stack:\n 1 for Push.\n 2 for pop.\n");
	int op;
	scanf("%d",&op);
	
	switch(op){
		case 1:
				//to check stack is empty or not
	if(isEmpty(s)){
		printf("Stack is empty\n");
	}
	else{
			printf("Stack is not empty\n");
	}
	
		//to check stack is full or not
	if(isFull(s)){
		printf("Stack is Full\n");
	}
	else{
			printf("Stack is not Full\n");
	}
	int n,i;
	printf("Enter values to enter in the Stack:\n");
	for(i=1;i<=s->size;i++){
		scanf("%d",&n);
		push(s,n);
		}
			break;
		case 2:
			pop(s);
	//to check stack is empty or not
	if(isEmpty(s)){
		printf("\nStack is empty\n");
	}
	else{
			printf("\nStack is not empty\n");
	}
		//to check stack is full or not
	if(isFull(s)){
		printf("\nStack is Full\n");
	}
	else{
			printf("\nStack is not Full\n");
	}
		    break;
		default:
		       printf("Invalid Operation!");		
	}
	

	
	return 0;
}
