// =========================================================
// libnet -- A network stack implementation for BareMetal OS
//
// Copyright (C) 2017 Return Infinity -- see LICENSE
// =========================================================

/// @file error.h

#ifndef LIBNET_ERROR_H
#define LIBNET_ERROR_H

#ifdef __cplusplus
extern "C"
{
#endif

enum {
	/// @brief No error has occured.
	LIBNET_ERROR_NONE = 0,
	/// @brief A protocol handler found a
	/// bad field.
	LIBNET_ERROR_BAD_FIELD = 1,
	/// @brief A protocol handler needs more
	/// data to parse a header (or footer)
	LIBNET_ERROR_MISSING_DATA = 2,
	/// @brief Unknown error has occured.
	/// This field is set to -1 for backwards
	/// compatibility. Functions may continue
	/// to return -1 if an unknown error occured.
	LIBNET_ERROR_UNKNOWN = -1
};

#ifdef __cplusplus
} // extern "C"
#endif

#endif // LIBNET_ERROR_H
