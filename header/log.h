#include <iostream>
#include <stdio.h>

#define LOG_PANIC 0
#define LOG_CRIT  1
#define LOG_WARN  2
#define LOG_MSG   3 
#define LOG_MTC   4 // Maintainence
#define LOG_DEBUG 5
#define LOG_SL    6 // Super Low

struct logger
{
	logger( int loglevel );
	int loglevel;
	void setlevel( int loglevel );
	int std( int loglevel, char * fmt, ... );
	int stdc( char * prefix, char * fmt, ... );
	int panic( char * fmt, ... );
	int crit( char * fmt, ... );
	int warn( char * fmt, ... );
	int msg( char * fmt, ... );
	int mtc( char * fmt, ... );
	int debug( char * fmt, ... );
	int sl( char * fmt, ... );
private:
	int fd;
};

