#include <stdarg.h>

#include "log.h"

logger::logger( int loglevel )
	:loglevel(loglevel)
{}

void logger::setlevel( int loglevel )
{
	this->loglevel = loglevel;
	return;
}

int logger::stdc( char * prefix, char * format, ...)
{
	int result;
	va_list args;
	va_start( args, format ); 
	/*
	 * Needed for it to find where the arguments went, so format is the last named argument
	 */
	printf( "Printed by logger\n" );

	result = vprintf( format, args );

	return result;
}
