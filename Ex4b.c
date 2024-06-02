#include<stdio.h>
#include<string.h>
int main(){
    char pat[30],temp[1001],fn[100];
    FILE *fp;
    printf("Enter the FileName : ");
    scanf("%s",fn);
    printf("Enter the Pattern: ");
    scanf("%s",pat);
    fp=fopen(fn,"r");
    if (fp==NULL){
        printf("File Not Found");
        return 0;
    }else{
        while(!feof(fp)){
            fgets(temp,1000,fp);
            if (strstr(temp,pat)!=NULL){
                printf("%s",temp);
            }
        }
    }
    fclose(fp);
}
