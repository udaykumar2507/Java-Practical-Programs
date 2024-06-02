#include <stdio.h>
#include <stdlib.h>

struct st {
    char dname[10];
    char sdname[10][10];
    char fname[10][10][10];
    int ds;
    int sds[10];
} *dir[10];

int main() {
    int n;
    printf("Enter the Number of Directories: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        dir[i] = (struct st *)malloc(sizeof(struct st));
        printf("Enter the Directory Name and Directory Size: ");
        scanf("%s", dir[i]->dname);
        scanf("%d", &dir[i]->ds);

        for (int j = 0; j < dir[i]->ds; j++) {
            printf("Enter the SubDirectory Name and SubDirectory Size: ");
            scanf("%s", dir[i]->sdname[j]);
            scanf("%d", &dir[i]->sds[j]);

            printf("Enter the file names:\n");
            for (int k = 0; k < dir[i]->sds[j]; k++) {
                scanf("%s", dir[i]->fname[j][k]);
            }
        }
    }

    printf("\nDirectory Structure:\n");
    for (int i = 0; i < n; i++) {
        printf("Directory Name: %s, Size: %d\n", dir[i]->dname, dir[i]->ds);
        for (int j = 0; j < dir[i]->ds; j++) {
            printf("  SubDirectory Name: %s, Size: %d\n", dir[i]->sdname[j], dir[i]->sds[j]);
            printf("  Files: ");
            for (int k = 0; k < dir[i]->sds[j]; k++) {
                printf("%s ", dir[i]->fname[j][k]);
            }
            printf("\n");
        }
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(dir[i]);
    }

    return 0;
}

