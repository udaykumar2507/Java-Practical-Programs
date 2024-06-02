#include <stdio.h>
int main(){
    int c,bt[10],at[10],ft[10],st[10],wt[10],tat[10];
    int awt,atat,rr[10];
    int n;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Enter the arrival time and Burst Time ");
    for (int i=0;i<=n;i++){
        scanf("%d %d",&at[i],&bt[i]);
    }
    for (int i=0;i<=n;i++){
        st[i]=c;
        c+=bt[i];
        wt[i]=st[i]-at[i];
        ft[i]=bt[i]+st[i];
        tat[i]=bt[i]+wt[i];
        rr[i]=tat[i]/bt[i];
    }
    for (int i=0;i<=n;i++){
         awt+=wt[i];
         atat+=tat[i];
    }
    awt/=n;
    atat/=n;
    printf(" At Bt  Wt  Ct  Tat RR ");
    for (int i=0;i<=n;i++){
       printf("\n %d %d %d %d %d %d",at[i],bt[i],wt[i],ft[i],tat[i],rr[i]);
    }
}



