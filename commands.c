#include "commands.h"
#include "sched.h"

void
execute_command( const char *command )
{
    char *cmd_name, *cmd_param = NULL;
    void *(cmd_executor)( void *arg );

    sscanf( command, "%s %s", cmd_name, cmd_param );

    if( cmd_param == NULL )
    		CMD_FUNCTION_NO_PARAM( cmd_name );
    	else {
    		cmd_executor = CMD_FUNCTION( cmd_name, cmd_param );
    		cmd_executor();
    	}
}

static void 
cmd_mode( const void *cmd_param )
{
	int run_mode = atoi ( (char *)cmd_param ) );

	switch(run_mode) {
		case FCFS : break;
		case SJF : break;
		case RR : break;
	}

}

static void 
cmd_pass( const void *cmd_param )
{

}

static void 
cmd_run()
{

}

static void 
cmd_kill( const void *cmd_param ) 
{
	pid_t pid = *(( pid_t * ) cmd_param);
}

static void 
cmd_show()
{

}

static void
cmd_exit() 
{
    exit(1);
}
