typedef struct st_device {
	int device_number;
	char *device_name;
	int burst_time;
	void (*io_task)();
} DEVICE;


void init_device(DEVICE *, int, char *, int);
void io_task();