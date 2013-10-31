#include "ready_queue.h"

void 
enqueue_task( TASK_RQ *rq, PCB* task )
{
	if( is_empty(rq) ) {
		rq->front = rq->rear = task;
		task.list->prev = NULL;
	} else {
		rq->rear.list->next = task.list;
		task.list->prev = rq->rear;
		rq->rear = task;
	}

    task.list->next = NULL;

	++rq.size;
}

PCB *
dequeue_task( TASK_RQ *rq )
{

	--rq.size;

	return front_task;
}

bool
is_empty( TASK_RQ *rq ) 
{
	return rq.size == 0;
}

int 
get_queue_size( TASK_RQ *rq )
{
	return rq->size;
}

PCB *
get_first_task( TASK_RQ *rq )
{
	return rq->front;
}

PCB *
get_last_task( TASK_RQ *rq )
{
	return rq->rear;
}

TASK_RQ *
init_task_queue()
{
	TASK_RQ *task_queue = (TASK_RQ *) malloc ( sizeof(TASK_RQ) );	

    task_queue->front = task_queue->rear = NULL;
    task_queue->size = 0;
    
    return task_queue;
}

void
clear_queue( TASK_RQ *rq )
{
    while(!is_empty()) {
        dequeue_task(rq);
    }
}