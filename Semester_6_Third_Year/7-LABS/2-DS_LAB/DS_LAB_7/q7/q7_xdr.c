/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "q7.h"

bool_t
xdr_strpair (XDR *xdrs, strpair *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->len1))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)(&(objp->a)), &objp->len1,INT_MAX,sizeof(char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->len2))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)(&(objp->b)), &objp->len2, INT_MAX,sizeof(char),(xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
