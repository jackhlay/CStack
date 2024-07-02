#include "stack.h"

int main() {
	node* stack = NULL;
	push(&stack, 10);
	push(&stack, 20);
	push(&stack, 30);
	stackPrint(&stack);

	pop(&stack);
	stackPrint(&stack);

	printf("\nTop value = %d\n", getTop(&stack));
	return 0;
}
