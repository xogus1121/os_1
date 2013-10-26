#include "process_structure.h"

typedef st_ready_queue {
	PCB *front, *rear;
}TASK_RQ	;


void enqueue_task(TASK_RQ *, PCB *);
bool dequeue_task(TASK_RQ *, PCB *task);
bool is_empty(TASK_RQ *);
int get_queue_size(TASK_RQ *);
PCB *get_first_task(TASK_RQ *);
PCB *get_last_task(TASK_RQ *);
