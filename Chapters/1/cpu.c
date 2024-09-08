#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For sleep function

int main(int argc, char *argv[]) {
    // Check if exactly one argument is provided
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    
    // Retrieve the string from the command-line argument
    char *str = argv[1];

    // Infinite loop to repeatedly print the string
    while (1) {
        // Sleep for 1 second (or adjust the duration as needed)
        sleep(1);
        
        // Print the provided string to standard output
        printf("%s\n", str);
    }
    
    // Return 0 (although this line will never be reached)
    return 0;
}
