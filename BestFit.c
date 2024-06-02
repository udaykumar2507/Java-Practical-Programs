#include <stdio.h>

int main() {
    int frag[25], blocks[25], files[25], blockFit[25], Allocated[25] = {0};
    int nf, nb, temp;

    printf("Enter the Number of Files: ");
    scanf("%d", &nf);
    
    printf("Enter the Number of Blocks: ");
    scanf("%d", &nb);
    int lowest=100000;
    
    printf("Enter the Files:\n");
    for (int i = 0; i < nf; i++) {
        scanf("%d", &files[i]);
    }
    
    printf("Enter the Blocks:\n");
    for (int i = 0; i < nb; i++) {
        scanf("%d", &blocks[i]);
    }
    
    for (int i = 0; i < nf; i++) {
        for (int j = 0; j < nb; j++) {
            if (Allocated[j] == 0 && (temp = blocks[j] - files[i]) >= 0 && temp < lowest) {
                lowest= temp;
                blockFit[i] = j;
            }
        }
        frag[i] = lowest;
        Allocated[blockFit[i]] = 1;
        lowest=10000;
    }
    
    printf("\nFile No.\tFile Size\tBlock No.\tBlock Size\tFragment");
    for (int i = 0; i < nf; i++) {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i + 1, files[i], blockFit[i] + 1, blocks[blockFit[i]], frag[i]);
    }

    return 0;
}

