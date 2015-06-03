#pragma once
class Log
{
public:
	Log();
	virtual ~Log();
	int printf(const char *format, ...);
};

