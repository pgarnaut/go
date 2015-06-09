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
	FILE *logfile = fopen("meijin.log", "w");

	if (!logfile) {
		fprintf(stderr, "error opening logfile\n");
		return 1;
	}

	va_start(arg, format);
	done = vfprintf(logfile, format, arg);
	va_end(arg);

	fclose(logfile);
	return done;
}