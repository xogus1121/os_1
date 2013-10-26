#include "process_structure.h"

void enqueue_task(PCB *task);
bool dequeue_task(PCB *task);
bool is_empty();
int get_queue_size();
PCB *get_first_task();
PCB *get_last_task();
