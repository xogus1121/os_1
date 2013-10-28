#include "commands.h"


void
execute_command( char *command )
{
    char *cmd_name, *cmd_param;
    void (*cmd_executer)();

    sscanf( command, "%s %s", cmd_name, cmd_param );

    cmd_executer = ASSERT_CMD( cmd_name );
    cmd_executer();

}

void cmd_pass()
{

}

void cmd_run()
{

}

void cmd_kill() 
{

}

void cmd_show()
{

}

void cmd_exit() 
{

}