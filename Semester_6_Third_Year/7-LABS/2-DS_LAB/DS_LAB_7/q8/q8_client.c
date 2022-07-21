/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "q8.h"


void
arr_prog_2(char *host,char* a,char* b)
{
	CLIENT *clnt;
	int  *result_1;
	strpair  substring_2_arg = {strlen(a)+1,a,strlen(b)+1,b};

#ifndef	DEBUG
	clnt = clnt_create (host, ARR_PROG, VERSION1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = substring_2(&substring_2_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	if(*result_1 == 1){
		printf("Is a substring\n");
	}
	else printf("Not a substring\n");
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	arr_prog_2 (host,argv[2],argv[3]);
exit (0);
}