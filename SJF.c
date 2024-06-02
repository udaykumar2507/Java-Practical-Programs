#include<stdio.h>
typedef struct{
  int id;
  int arrivalTime;
  int Finishtime;
  int WaitingTime;
  int startTime;
  int BurstTime;
  int OriginalBurstTime;
  int TurnAroundTime;
  float ResponseRatio;
}Process;
int main(){
   int nextStartTime=0,CompletedCount=0,AverageWaitingTime=0,AverageTurnAroundTime=0;
   int n;
   printf("Enter the Number of Elements");
   scanf("%d",&n);
   Process process[n];
   for(int i=0;i<n;i++){
        scanf("%d %d %d",&process[i].id,&process[i].arrivalTime,&process[i].BurstTime);
        process[i].WaitingTime=0;
        process[i].TurnAroundTime=0;
        process[i].ResponseRatio=0;
        process[i].OriginalBurstTime=process[i].BurstTime;
   }
   while(CompletedCount<n){
       int minIndex=-1;
       int minBurst=100;
       for (int i=0;i<n;i++){
            if(process[i].arrivalTime<=nextStartTime && process[i].BurstTime>0 && process[i].BurstTime<minBurst){
                   minBurst=process[i].BurstTime;
                   minIndex=i;
            }
       }
       if (minIndex!=-1){
            int i=minIndex;
            process[i].startTime=nextStartTime;
            process[i].WaitingTime=process[i].startTime-process[i].arrivalTime;
            process[i].Finishtime=process[i].startTime+process[i].BurstTime;
            process[i].TurnAroundTime=process[i].Finishtime-process[i].arrivalTime;
            process[i].ResponseRatio=process[i].TurnAroundTime/process[i].OriginalBurstTime;
            process[i].BurstTime=0;
            nextStartTime=process[i].Finishtime;
            CompletedCount++;
       }else{
           nextStartTime++;   
       }
   }
    for (int i=0;i<n;i++){
        printf("\n %d %d %d %d %d %d %f",process[i].arrivalTime,process[i].OriginalBurstTime,process[i].startTime,process[i].Finishtime,process[i].WaitingTime,process[i].TurnAroundTime,process[i].ResponseRatio);   
    }
}
