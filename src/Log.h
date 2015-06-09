#pragma once
class Log
{
public:
	Log();
	virtual ~Log();
	static int printf(const char *format, ...);
};

