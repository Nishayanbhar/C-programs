/*
accept file name and position from user and copy 10 bytes from that pos
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
 void FileRead(char *src,int pos, int size)
{
    int fd=0, ret = 0;
    char* Mug=NULL;
	Mug=(char*)malloc(size);
    
    fd= open(src,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open source file\n");
        return;
    }
   
	lseek(fd,pos,SEEK_SET);			// go to that position from starting 
	ret=read(fd,Mug,size);
	
	printf("Data from file is:\n");
	write(1,Mug,ret);
	
	printf("\n");
   
	
    close(fd);
}
int main()
{
    char name1[20];
	int val1=0,val2=0;
    
    printf("Enter source file name\n");
    scanf("%s",name1);
    
    printf("Enter position\n");
    scanf("%d",&val1);
    
	printf("how many bytes\n");
    scanf("%d",&val2);
    
	
    FileRead(name1,val1,val2);
    
    return 0;
}