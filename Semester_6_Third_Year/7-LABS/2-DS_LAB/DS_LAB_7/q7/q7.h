/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _Q7_H_RPCGEN
#define _Q7_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct strpair {
	int len1;
	char *a;
	int len2;
	char *b;
};
typedef struct strpair strpair;

#define ARR_PROG 0x20000007
#define VERSION1 2

#if defined(__STDC__) || defined(__cplusplus)
#define cmp 1
extern  int * cmp_2(strpair *, CLIENT *);
extern  int * cmp_2_svc(strpair *, struct svc_req *);
extern int arr_prog_2_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define cmp 1
extern  int * cmp_2();
extern  int * cmp_2_svc();
extern int arr_prog_2_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_strpair (XDR *, strpair*);

#else /* K&R C */
extern bool_t xdr_strpair ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_Q7_H_RPCGEN */
