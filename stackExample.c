#include "stack.h"

int main() {
	node* stack = NULL;
	printf("STACK EMPTY = %b\n",isEmpty(&stack));
	
	push(&stack, 10);
	push(&stack, 20);
	push(&stack, 30);
	stackPrint(&stack);

	printf("\nSTACK LENGTH = %d\n",stackLength(stack));
	printf("STACK EMPTY = %b\n\n",isEmpty(&stack));
	
	pop(&stack);
	stackPrint(&stack);

	printf("\nTop value = %d\n", getTop(&stack));
	return 0;
}
