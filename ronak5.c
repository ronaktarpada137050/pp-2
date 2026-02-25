#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int source[n], destination[n];
    
    // Input elements into source array
    printf("Enter %d elements for source array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }
    
    // Copy elements from source to destination array
    for(i = 0; i < n; i++) {
        destination[i] = source[i];
    }
    
    // Display source array
    printf("\nSource array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }
    
    // Display destination array
    printf("\nCopied array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    
    printf("\n");
    return 0;
}
