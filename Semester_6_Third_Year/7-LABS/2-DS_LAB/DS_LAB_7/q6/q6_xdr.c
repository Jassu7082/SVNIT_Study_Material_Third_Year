/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "q6.h"

bool_t
xdr_arraysize (XDR *xdrs, arraysize *objp)
{
	return xdr_array(
                 xdrs,
                 (char**)(&(objp->arr)),
                 &(objp->size),
                 INT_MAX,
                 sizeof(int),
                 (xdrproc_t)xdr_int);
}
