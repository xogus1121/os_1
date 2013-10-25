typedef st_pcb {
	pid_t pid;
	long state;
	unsigned int time_slice;
	struct task_struct *parent;
	struct list_head children;
	struct files_struct *files;
	struct mm_struct *mm;
	int registers[32];
}PCB;


