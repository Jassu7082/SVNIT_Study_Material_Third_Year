/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "factorial.h"

int *
factorial_1_svc(int *argp, struct svc_req *rqstp)
{
    static int  result;

    /*
     * insert server code here
     */

    int  temp = 1;
    for(int i = 1; i <= *argp; i++)
    {
        temp *= i;
    }
    printf("Factorial of %d is called\n",*argp);
    result = temp;

    return &result;
}