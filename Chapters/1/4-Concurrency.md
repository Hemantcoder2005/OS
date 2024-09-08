# Concurrency Example

Welcome to our example of a multi-threaded program. This simple example demonstrates how concurrency issues can arise in programs that use multiple threads. 

## The Problem

Imagine you have a shared counter that two threads are incrementing simultaneously. Here's a basic outline of what’s happening:

- Each thread runs a function (`worker()`) that increments a shared counter.
- You might expect that if each thread increments the counter a certain number of times, the final value should be predictable.

### Code
```C
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>  // Include pthread.h for thread functions
#include "common.h"  // Include your common header files
#include "common_threads.h"  // Include your thread utility functions

volatile int counter = 0;  // Shared counter
int loops;  // Number of iterations for each thread

void *worker(void *arg) {
    int i;
    for (i = 0; i < loops; i++) {
        counter++;
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s <value>\n", argv[0]);
        exit(1);
    }
    
    loops = atoi(argv[1]);
    
    pthread_t p1, p2;
    
    printf("Initial value : %d\n", counter);
    
    pthread_create(&p1, NULL, worker, NULL);
    pthread_create(&p2, NULL, worker, NULL);
    
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    
    printf("Final value : %d\n", counter);
    
    return 0;
}

```
```bash
gcc -o threads threads.c -Wall -pthread
./threads 1000
./threads 100000
./threads 100000
```
### What You Might Expect

If each thread increments the counter `N` times, and you have two threads, you’d expect the final value of the counter to be `2 * N`.

For example, if `N` is 1000:
- Each thread will increment the counter 1000 times.
- With two threads, you’d expect the final value to be 2000.

### What Actually Happens

When running the program with higher values for `N`, you might get unexpected results:
- **Initial Value:** 0
- **Expected Final Value:** 200000 (for `N = 100000`)
- **Actual Final Values:** Often varies, e.g., 143012 or 137298

This variability occurs due to a concurrency issue where threads are not properly synchronized, leading to inconsistent updates to the shared counter.

## How Concurrency Issues Occur

In a multi-threaded environment, instructions are not always executed atomically. For example, incrementing a counter involves:
1. Loading the counter value into a register.
2. Incrementing the value.
3. Storing the updated value back into memory.

If two threads are performing these steps simultaneously, their operations can interfere with each other, leading to unexpected results.


## Conclusion

Concurrency is a challenging topic, especially when dealing with shared resources. Understanding these issues and learning how to manage them is crucial for developing reliable multi-threaded applications.

Feel free to explore the provided links to dive deeper into concurrency and learn more about solving these problems.

---

Happy coding! 🚀

[Back](3-MemoryVirtualize.md) | [Next](5-Persistence.md)