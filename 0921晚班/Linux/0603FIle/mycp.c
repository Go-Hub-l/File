#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv)
{
	//错误处理
	if(argc < 3)
		{
			printf("请输入源文件和目标文件!\n");
			exit(1);
		}

	//创建文件描述符
	int sfd = open(argv[1],O_RDONLY);
	int dfd = open(argv[2],O_WRONLY|O_CREAT,0664);

	//从源文件读
	char buffer[8192];
	bzero(buffer,sizeof(buffer));
	int nrsize = read(sfd,buffer,sizeof(buffer));
	printf("%d\n",nrsize);

	//向目标文件写
	write(dfd,buffer,nrsize);

	close(sfd);
	close(dfd);

	return 0;
}
