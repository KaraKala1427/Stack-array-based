//#include <stdio.h>
//#include <stdlib.h>
//#include "stack.h"
//
//int main() {
//	stack * st = create_stack();
//	if (st == NULL) {
//		printf("Memory does not allocated.\n");
//		exit(0);
//	}
//	//printing stack elements when it is empty
//	print_stack(st);
//
//	//pushing elements
//	push(st, 1);
//	push(st, 2);
//	push(st, 3);
//	push(st, 4);
//	push(st, 5);
//	printf("Top element of stack is %i \n",peek_top(st));
//
//	//pop the stack and print top and stack_size
//	pop(st);
//	printf("Top element of stack is %i \n",peek_top(st));
//	printf("Size of stack is %zu \n",stack_size(st));
//
//
//	push(st, 6);
//	push(st, 7);
//	push(st, 8);
//	push(st, 9);
//	push(st, 10);
//	print_stack(st);
//	printf("Size of stack is %zu \n",stack_size(st));
//	printf("Top element of stack is %i \n",peek_top(st));
//
//	//clearing stack and printing stack_size
//	clear_stack(st);
//	printf("Size of stack is %zu \n",stack_size(st));
//
//	destroy_stack(st);
//}
