#define CMD_MODE "mode"
#define CMD_PASS "pass"
#define CMD_RUN "run"
#define CMD_KILL "kill"
#define CMD_SHOW "show"
#define CMD_EXIT "exit"

#define CMD_FUNCTION(x) cmd_##x()

void execute_command(char *);

void cmd_pass();
void cmd_run();
void cmd_kill();
void cmd_show();
void cmd_exit();
