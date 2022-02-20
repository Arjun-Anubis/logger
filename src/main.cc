#include "log.h"

int main(int argc, char *argv[])
{
	logger log( 0 );
	log.stdc( "Prefix", "my int %d", 4 );
	return 0;
}
