// =========================================================
// libnet -- A network stack implementation for BareMetal OS
//
// Copyright (C) 2017 Return Infinity -- see LICENSE
// =========================================================

#include <libnet/protocol.h>

#ifndef NULL
#define NULL ((void *) 0x00)
#endif

void libnet_protocol_init(struct libnet_protocol *protocol)
{
	protocol->id = LIBNET_PROTOCOL_NONE;
	protocol->data = NULL;
	protocol->done = NULL;
	protocol->read = NULL;
	protocol->write = NULL;
}

void libnet_protocol_done(struct libnet_protocol *protocol)
{
	if (protocol->done)
		protocol->done(protocol->data);
}