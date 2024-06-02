#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MIN_PER_RANKS 1
#define MAX_PER_RANKS 5
#define MIN_RANKS 3
#define MAX_RANKS 5
#define PERCENT 30
int main(void){
   int nodes=0;
   srand(time(NULL));
   int ranks=MIN_RANKS+(rand()%(MAX_RANKS-MIN_RANKS+1));
   for (int i=0;i<ranks;i++){
       int new_nodes=MIN_PER_RANKS+(rand()%(MAX_PER_RANKS-MIN_PER_RANKS+1));
       for (int j=0;j<nodes;j++){
            for (int k=0;k<new_nodes;k++){
               if ((rand() %100)<PERCENT){
                  printf("%d->%d\n",j,k+nodes);
               }
            }
      }
      nodes+=new_nodes;
  }
  printf("\n");
  return 0;
}
  
