#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd = open("tmp",O_RDWR|O_CREAT,0664);

	ftruncate(fd,0x100000);
	close(fd);

	return 0;
}
