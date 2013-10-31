typedef st_pcb {
	struct list_head list;
	pid_t pid;
	long state;
	unsigned int time_slice;
	PCB *parent;
	struct list_head children;
	struct files_struct *files;
	struct mm_struct *mm;
	unsigned int flags;
	int registers[32];
} PCB;

typedef st_ready_queue {
	PCB *front, *rear;
	int size;
} TASK_RQ;


void enqueue_task( TASK_RQ *, PCB * );
PCB *dequeue_task( TASK_RQ * );
bool is_empty( TASK_RQ * );
int get_queue_size( TASK_RQ * );
PCB *get_first_task( TASK_RQ * );
PCB *get_last_task( TASK_RQ * );
TASK_RQ *init_task_queue();
void clear_queue( TASK_RQ * );