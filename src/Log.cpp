#include "Log.h"
#include <stdarg.h>
#include <stdio.h>

Log::Log()
{
}


Log::~Log()
{
}

int Log::printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vfprintf(stdout, format, arg);
	va_end(arg);

	return done;
}