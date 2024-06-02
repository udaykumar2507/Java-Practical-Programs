#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(int args,char*argv[]){
      DIR *dname;
      struct dirent *dptr;
      if (args!=2){
          printf("Error");
          exit(-1);
      }
      if ((dname=opendir(argv[1]))==NULL){
          perror(argv[1]);
          exit(-1);
      }
      while(dptr=readdir(dname)){
           printf("%s\n",dptr->d_name);
      }
      closedir(dname);
} 
      
      
      
