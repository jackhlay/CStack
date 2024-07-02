# CStack, a basic stack implementation in C.
  
In this repository is a simple stack implementation using singly linked lists, using 'node' structs in C.  
It supports basic stack opearations like push, pop, getTop.  

# Functions  
  
## Utility Functions:  
- node* createNode(int data)  
Creates a new node with given data.

## General Use Functions  
- int insertHead(node** head, int data)  
Inserts a new node with data into the head of the stack.  
  
- int decap(node** head)  
Removes the top node from the stack.  
  
- int isEmpty(node** stack)  
Checks if the stack is populated or not.  
  
- void push(node** stack, int data)  
pushes an element onto the top of the stack.  
  
- int pop(node** stack)  
Removes and returns the top element from the stack.  
  
- int getTop(node** stack)  
Returns the top element of the stack, but does not pop it off.  
  
- int stackPrint(node** stack)  
Prints the stack from top to bottom. (Ex: 4 -> 3 -> 0 -> ...)  


# Example Implementattion  

```C

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
//output:
// 30 -> 20 -> 10 ->
// 20 -> 10 ->

// Top value = 20
```
