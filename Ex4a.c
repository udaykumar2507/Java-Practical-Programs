#include <stdio.h>
#include<dirent.h>
int main(){
     struct dirent **namelist;
     char pathname[200];
     printf("Enter the Pathname");
     scanf("%s",pathname);
     int n=scandir(pathname,&namelist,0,alphasort);
     if (n==-1){
         perror("File Doesnt Exist");
     }else{
         for (int i=0;i<n;i++){
             printf("%s\n",namelist[i]->d_name);
          }
      }
}
