#include <stdio.h>

int main() {
    int n, i;
    
    printf("Abay size bata array ka: ");
    scanf("%d", &n);
    
    int arr[n]; 
    
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = -1; 
        }
    }
    
    
    
    int foundDuplicate = 0; 
    for (i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            printf("Abay duplicate mil gaya h: ");
            printf("%d ", arr[i]);
            foundDuplicate = 1; 
        }
    }
    
    if (!foundDuplicate) {
        printf("Nh mela koi duplicate.");
    }
    
    printf("\n");
    return 0;
}