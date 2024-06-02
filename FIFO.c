#include<stdio.h>
int main(){
    int n,a[50],frames[10]={-1},count=0,no,j=0;
    printf("Enter the No of Pages");
    scanf("%d",&n);
    printf("Enter the Ref Strings");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the No of Frames");
    scanf("%d",&no);
    for (int i=0;i<n;i++){
       printf("\n \t\t%d",a[i]);
       int avail=0;
       for (int k=0;k<no;k++){
            if (a[i]==frames[k]){
                 avail=1;    
            }
       }
       if (avail==0){
            frames[j]=a[i];
            j=(j+1)%no;
            count++;
            for (int k=0;k<no;k++){
               printf("\t%d",frames[k]);
            }
      }
    }
      printf("\n");
      printf("Page Fault is %d\n",count); 
}
