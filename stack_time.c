#include <sys/time.h>
#include <stdio.h>
#include "stack.h"

int main() {
	struct timeval tv1, tv2;

	gettimeofday(&tv1, NULL);

	stack * st = create_stack();

	int i;
	for(i = 0; i < 90000000; ++i){
		push(st, i);
	}

	gettimeofday(&tv2, NULL);

	printf("Total time = %f seconds\n",(double) (tv2.tv_usec - tv1.tv_usec) / 1000000 + (double) (tv2.tv_sec - tv1.tv_sec));

	return 0;
}
