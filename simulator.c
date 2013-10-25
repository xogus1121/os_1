#include <stdio.h>
#include <string.h>

#define MAX_COMMAND 128

char *str_gets( char *, size_t );
void process_command( char * );

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

}
