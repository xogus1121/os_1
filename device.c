DEVICE *Disk, *Printer, *NIC, *Video_Card;

void 
init_device( DEVICE *device, int device_number, char *device_name, int burst_time )
{
	device = (DEVICE *) malloc ( sizeof(DEVICE) );
	device->device_number = device_number;
	strcpy(device->device_name, device_name);
	io_task = io_task;
}

void io_task()
{

}