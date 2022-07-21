/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fib.h"

sequence *
fib_1_svc(int *argp, struct svc_req *rqstp)
{
	static sequence result;

	result.a[0] = 0;
	result.a[1] = 1;
	int i = 2;
	printf("Fib upto %d is called\n", *argp);
	while (result.a[i - 1] < (*argp))
	{
		result.a[i] = result.a[i - 1] + result.a[i - 2];
		i++;
	}
	return &result;
}