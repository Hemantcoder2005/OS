#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[]) {
    // Allocate memory for an integer
    int *p = malloc(sizeof(int));
    
    // Check if malloc succeeded
    assert(p != NULL);
    
    // Print the address of the allocated memory
    printf("(%d) address pointed to by p: %p\n", getpid(), (void *)p);

    // Initialize the allocated memory
    *p = 0;

    // Infinite loop
    while (1) {
        // Sleep for 1 second
        sleep(1);
        
        // Increment the value pointed to by p
        *p = *p + 1;
        
        // Print the current value of the integer
        printf("(%d) p: %d\n", getpid(), *p);
    }

    // Free the allocated memory (this line will never be reached)
    free(p);

    return 0;
}
