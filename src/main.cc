#include <time.h>
#include "log.h"

int main(int argc, char *argv[])
{
	char buffer[TIME_LEN];
	time_t now = time(0);
	struct tm  tstruct;

	tstruct = *localtime(&now);

	strftime( buffer, TIME_LEN, "%H:%M:%S", &tstruct );
	log_setlevel( LOG_MAX );
	log_test();
	log_debug( "%s", buffer );
	return 0;
}
