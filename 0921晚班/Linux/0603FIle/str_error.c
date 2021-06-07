#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void str_error(const char *message,int exitcode)
{
	perror(message);
	exit(exitcode);
}

int main(void)
{
	int fd = open("不存在的文件",O_RDWR);

	if(fd == -1)
	{
		str_error("call open file",-1);
	}

	return 0;
}
