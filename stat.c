#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include <unistd.h>
#include<fcntl.h>
int main(){
  int fd1,fd2,n;
  struct stat s,t,w;
  char source[50],ch[5];
  fd1=creat("text.txt",0644);
  printf("Enter the File to be Copied");
  scanf("%s",source);
  fd2=open(source,0);
  if (fd2==-1){
      perror("File Not Found");
      exit(0);
  }
  while((n=read(fd2,ch,1))>0){
       write(fd1,ch,n);
  }
  close(fd2);
  stat(source,&s);
  printf("Source File Size %ld\n",s.st_size);
  fstat(fd1,&t);
  printf("Destination file Size %ld\n",t.st_size);
  close(fd2);
  
}
