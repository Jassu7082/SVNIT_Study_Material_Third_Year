/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "A.h"

arraysize *
reverse_2_svc(arraysize *argp, struct svc_req *rqstp)
{
	static arraysize result;

	/*
	 * insert server code here
	 */

	printf("Array is Being Reversed....\n");

	result.size = argp->size;

	int *arr = malloc(argp->size * sizeof(int));

	for (int i = 0; i < result.size; i++)
		arr[i] = argp->arr[result.size - i - 1];

	result.arr = arr;

	return &result;
}
