/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _Q5_H_RPCGEN
#define _Q5_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct intpair {
	int a;
	int b;
};
typedef struct intpair intpair;

#define SWAP_PROG 0x4562877
#define VERSION1 1

#if defined(__STDC__) || defined(__cplusplus)
#define swap 1
extern  intpair * swap_1(intpair *, CLIENT *);
extern  intpair * swap_1_svc(intpair *, struct svc_req *);
extern int swap_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define swap 1
extern  intpair * swap_1();
extern  intpair * swap_1_svc();
extern int swap_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_intpair (XDR *, intpair*);

#else /* K&R C */
extern bool_t xdr_intpair ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_Q5_H_RPCGEN */
