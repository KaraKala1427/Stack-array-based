#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

stack* create_stack(){
	struct stack *st;

	st = (stack *) malloc(sizeof(stack));

	st->array_size = 5;
	st->stack_size = 0;
//	st->values = (int *) malloc(5 * sizeof(int));
	st->values = (int *) calloc(5 , sizeof(int));

	return st;
}

void destroy_stack(stack *stk){
	free(stk->values);
	free(stk);
}

void push(stack *stk, int val){
	if(stk->stack_size == stk->array_size){
		stk->array_size *=2;
		stk->values = realloc(stk->values, sizeof(int) * stk->array_size);
	}

	stk->values[stk->stack_size] = val;
	stk->stack_size++;
}

int pop(stack *stk){

	if(stk->stack_size == 0){
		printf("stack Underflow\n");
		return 0;
	}
	stk->stack_size--;
	return stk->values[stk->stack_size];
}

int peek_top(stack *stk){
	if (stk->stack_size != 0) {
		return stk->values[stk->stack_size-1];
	}

	return 0;
}

size_t stack_size(stack *stk){
	return stk->stack_size;
}

void clear_stack(stack *stk){
	stk->stack_size = 0;
}

void print_stack(stack *stk){
	if(stk->stack_size == 0)
	{
		printf("Stack is empty\n");
	}
	else if(stk->stack_size > 0)
	{
		for(int i = stk->stack_size-1; i >= 0; i--) // from bottom to top
		{
			printf("%d\n",stk->values[i]);
		}
	}
}





