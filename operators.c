#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }
    printf("SUCHITRA RANA\n");
    printf("Enter an integer: ");
    scanf("%d", ptr);
    printf("\nAddress of the allocated memory: %p\n", (void *)ptr);
    printf("Data stored at the allocated memory: %d\n", *ptr);
    free(ptr);
    printf("\nMemory freed successfully.\n");
    return 0;
}
