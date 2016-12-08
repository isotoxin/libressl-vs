#pragma once

#pragma warning(disable:4244) // conversion from '__int64' to 'long', possible loss of data
#pragma warning(disable:4267) // conversion from 'size_t' to 'int', possible loss of data

#define __attribute__(...)

#define HAVE_INET_PTON

#define _CRT_NONSTDC_NO_DEPRECATE

#define __BEGIN_HIDDEN_DECLS
#define __END_HIDDEN_DECLS

#define LIBRESSL_INTERNAL

#define OPENSSL_NO_ENGINE
#define OPENSSL_NO_GOST

#include <malloc.h>
#include <compat/string.h>
#include <compat/stdlib.h>
#include <compat/time.h>

#include <winsock2.h>
#include <windows.h>
#include <wincrypt.h>
#undef X509_NAME


inline char *strndup(const char *s, size_t n)
{
	char * p = (char *)malloc(n+1);
    strncpy(p, s, n);
    p[n] = 0;
	return p;
}
