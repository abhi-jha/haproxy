#ifndef _HAPROXY_XPRT_QMUX_H
#define _HAPROXY_XPRT_QMUX_H

#include <stddef.h>

struct buffer;
struct quic_transport_params;

const struct quic_transport_params *xprt_qstrm_lparams(const void *context);
const struct quic_transport_params *xprt_qstrm_rparams(const void *context);

size_t xprt_qstrm_xfer_rxbuf(void *context, struct buffer *out);

#endif /* _HAPROXY_XPRT_QMUX_H */
