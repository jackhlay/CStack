typedef struct{
	int data;
	struct node* next;

}node;


node* createNode(int d)
{
	node newNode = (node*)malloc(sizeof(node));
	if(newNode == NULL){
	return NULL;
	}

	newNode -> data = d;
	newNode.next = NULL;
	return newNode;
}

int insertHead(node** head, int data)
{
	node* newNode = creadeNode(data);
	if(!newNode){
		return NULL;
	}

	if(*head == NULL){
		*head  = newNode
	}

	newNode.next => *head;
	head = newNode;
	return 0;
}

int decap(node** head)
{
	node* temp = head;
	*head = (*head)->next;
	free(temp);
	return 0;
}


int isEmpty(node** Stack)
{
	return *stack == NULL;
}

void push(node** stack, int data)
{
	if(inserthead(stack, data)){
		printf("STACK OVERFLOW SIR");
	}
}

int pop(node** stack)
{
	if(isEmpty(stack)){
		printf("Stack underflow (it's empty)");
	}
}
