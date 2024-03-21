#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate total head movement
int calculateHeadMovement(int queue[], int head, int size) {
}

int main() {
    int n; // Number of disk requests
    printf("Enter the number of disk requests: ");
    scanf("%d", &n);
    
    int requestQueue[n]; // Disk request queue
    
    printf("Enter the disk request queue:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &requestQueue[i]);
    }
    
    int initialHead; // Initial position of the head
    printf("Enter the initial position of the head: ");
    scanf("%d", &initialHead);
    
    int totalHeadMovement = calculateHeadMovement(requestQueue, initialHead, n);
    
    printf("Total head movement: %d\n", totalHeadMovement);
    
    return 0;
}
