#define CMD_MODE "mode"
#define CMD_PASS "pass"
#define CMD_RUN "run"
#define CMD_KILL "kill"
#define CMD_SHOW "show"
#define CMD_EXIT "exit"

#define CMD_FUNCTION_NO_PARM(x) cmd_##x();
#define CMD_FUNCTION_(x, arg) cmd_##x(arg)


void execute_command(const char *);

static void cmd_mode(const void *);
static void cmd_pass(const void *);
static void cmd_kill(const void *);
static void cmd_run();
static void cmd_show();
static void cmd_exit();
