#include <stdio.h>
#include <string.h>
#include "simulator.h"
#include "commands.h"

int main( void )
{
    char command[MAX_COMMAND];

    str_gets( command, MAX_COMMAND );



    return 0;
}

char *
str_gets( char *buf, size_t len )
{
    fgets( buf, len - 1, stdin );
    buf[ strlen( buf ) - 1 ] = '\0';
    return buf;
}

void
process_command( char *command )
{
    char *command_name;

    sscanf( command, "%s", command_name);

    if( strcmp( command_name , CMD_PASS ) == 0 )
    {

    }

    else if( strcmp( command_name, CMD_RUN ) == 0 )
    {

    }

    else if( strcmp( command_name, CMD_KILL ) == 0)
    {

    }

    else if( strcmp( command_name, CMD_SHOW) == 0)
    {

    }

    else if( strcmp( command_name, CMD_EXIT) == 0)
    {
    	
    }
}
