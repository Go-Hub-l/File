#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define WMSG "write test message..\n"

int main()
{
	int fd;//创建文件描述符
	//fd = open("file",O_CREAT|O_RDWR,0664);//创建一个具有读写读写读权限的文件

		fd = open("file",O_RDWR);
		
		//写入数据
		size_t wsize = write(fd,WMSG,strlen(WMSG));
		printf("wsize = %d\n",wsize);
		//读取数据
		int nSize;
		nSize = lseek(fd,0,SEEK_END);
		/*char buffer[8192];
		bzero(buffer,sizeof(buffer));
		size_t rsize = read(fd,buffer,sizeof(buffer));
		printf("rsize = %d\n",rsize);
		printf("read message is:%s\n",buffer);*/
		printf("the file size is:%d\n",nSize);

	return 0;
}
