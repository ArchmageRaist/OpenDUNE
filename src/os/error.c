/* $Id$ */

/** @file src/error.c System dependant error messages. */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "types.h"
#include "strings.h"

#include "error.h"

void Error(char *format, ...) {
	va_list ap;

	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);
}
