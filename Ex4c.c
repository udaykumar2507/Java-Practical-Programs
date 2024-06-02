#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
int main(int argc,char *argv[]){
      int fd1,fd2,n;
      char *file1,*file2,buff[2];
      file1=argv[1];
      file2=argv[2];
      fd1=open(file1,O_RDONLY,0777);
      if (fd1==-1){
          printf("File Not Found");
          return 0;
      }
      fd2=creat(file2,0777);
      while((n=read(fd1,buff,1))>0){
           write(fd2,buff,1);
      }
      printf("Copied SuccesFully");
      close(fd1);
      close(fd2);
}
          
      
      
