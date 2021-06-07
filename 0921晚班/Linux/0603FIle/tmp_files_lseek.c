#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int mygetline(const char *filename)
{
	int nSize;

	int fd = open(filename,O_RDWR);

	nSize = lseek(fd,0,SEEK_END);

	return nSize;
}

int main()
{
	printf("%d\n",mygetline("file"));

	return 0;
}


