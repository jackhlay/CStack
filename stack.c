#include <stdlib.h>
#include <stdio.h>

typedef struct{
	int data;
	struct node* next;

}node;


node* createNode(int d)
{
	node* newNode = (node*)malloc(sizeof(node));
	if(newNode == NULL){
	return NULL;
	}

	newNode -> data = d;
	newNode->next = NULL;
	return newNode;
}

int insertHead(node** head, int data)
{
	node* newNode = createNode(data);
	if(!newNode){
		return -1;
	}

	if(*head == NULL){
		*head = newNode;
		return 0;
	}

	newNode->next = *head;
	*head = newNode;
	return 0;
}

int decap(node** head)
{
	node* temp = *head;
	*head = (*head)->next;
	free(temp);
	return 0;
}


int isEmpty(node** stack)
{
	return *stack == NULL;
}

void push(node** stack, int data)
{
	if(insertHead(stack, data)){
		printf("STACK OVERFLOW SIR");
	}
}

int pop(node** stack)
{
	if(isEmpty(stack)){
		printf("Stack underflow (it's empty)");
	}
	decap(stack);
}

int getTop(node** stack)
{
	if(!isEmpty(stack)){
		return (*stack)->data;
	}
	else{return -1;}
}


int stackPrint(node** stack)
{
	node* temp = *stack;
	while(temp != NULL){
		printf("%d -> ", temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
node* stack = NULL;

push(&stack, 30);
push(&stack, 20);
push(&stack, 10);
stackPrint(&stack);

pop(&stack);
stackPrint(&stack);
return 0;

}
