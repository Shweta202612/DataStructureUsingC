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


int main(){
	struct stack *s=(struct stack *)malloc(sizeof(struct stack));
	s->size=80;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int));
	
	s->arr[0]=7;
	s->top++;
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
	
	return 0;
}
