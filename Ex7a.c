#include <stdio.h>

typedef struct {
    int id;
    int arrivalTime;
    int finishTime;
    int waitingTime;
    int startTime;
    int burstTime;
    int turnAroundTime;
    float responseRatio;
} Process;

int main() {
    int nextStartTime = 0, completedCount = 0, averageWaitingTime = 0, averageTurnAroundTime = 0;
    int maxArrivalTime = 0; // To track maximum arrival time

    int n;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    Process process[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &process[i].id, &process[i].arrivalTime, &process[i].burstTime);
        process[i].waitingTime = 0;
        process[i].turnAroundTime = 0;
        process[i].responseRatio = 0;

        maxArrivalTime = (maxArrivalTime > process[i].arrivalTime) ? maxArrivalTime : process[i].arrivalTime;
    }

    while (completedCount < n) {
        int minIndex = -1;
        int shortestBurstTime = 100;
        for (int i = 0; i < n; i++) {
            if (process[i].arrivalTime <= nextStartTime && process[i].burstTime > 0 &&
                process[i].burstTime < shortestBurstTime) {
                shortestBurstTime = process[i].burstTime;
                minIndex = i;
            }
        }

        if (minIndex != -1) {
            int i = minIndex;
            process[i].startTime = nextStartTime;
            process[i].waitingTime = process[i].startTime - process[i].arrivalTime;
            process[i].finishTime = process[i].startTime + process[i].burstTime;
            process[i].turnAroundTime = process[i].waitingTime + process[i].burstTime;
            process[i].responseRatio = (float)process[i].turnAroundTime / process[i].burstTime;
            process[i].burstTime = 0;
            nextStartTime = process[i].finishTime;
            completedCount++;
        } else {
            nextStartTime++; // Move to next time slot if no process is ready
        }
    }

    printf("\n");
    printf("Process ID | Arrival Time | Burst Time | Start Time | Finish Time | Waiting Time | Turnaround Time | Response Ratio\n");
    for (int i = 0; i < n; i++) {
        printf(" %d           | %d            | %d           | %d            | %d            | %d            | %d            | %.2f\n",
               process[i].id, process[i].arrivalTime, process[i].burstTime, process[i].startTime,
               process[i].finishTime, process[i].waitingTime, process[i].turnAroundTime,process[i].responseRatio);

