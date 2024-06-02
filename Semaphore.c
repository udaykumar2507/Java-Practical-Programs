#include <stdio.h>
#include <stdlib.h>
int mutex=1,full=0,empty=3,x=0;
void producer();
void consumer();
int wait(int);
int signal(int);
int main(){
     int  n;
     printf("1.Producer,\n2.Consumer,\n3.Exit\n");
     while(1){
        printf("Enter a Choice : ");
        scanf("%d",&n);
         if (mutex==1){
             switch(n){
               case 1:
                   if (empty!=0){
                      producer();
                   }else{
                      printf("Buff is Full\n");
                   }
                   break;
               case 2:
                    if (full!=0){
                        consumer();
                    }else{
                       printf("Buff is Empty\n");
                    }
                    break;
              case 3:
                    exit(1);
        }
      }
  }
  }
  int signal(int s){
      return ++s;
  }
  int wait(int s){
     return --s;
  }
  void producer(){
     mutex=wait(mutex);
     full=signal(full);
     empty=wait(empty);
     x++;
     printf("Producer produces the item %d\n",x);
     mutex=signal(mutex);
  }
  void consumer(){
     mutex=wait(mutex);
     full=wait(full);
     empty=signal(empty);
     printf("Consumer consumes the item %d\n",x);
     x--;
     mutex=signal(mutex);
  }
   
      
                  

