# Why Virtualize?

- **Simplified Development**: Developers get to work with a large, continuous address space without dealing with the messy details of physical memory. It’s like being given a clean slate to draw on, without worrying about missing crayons.

- **Enhanced Security**: Virtualization keeps processes apart, preventing them from snooping on each other’s secrets. It’s like having separate dressing rooms for each performer in the circus.

- **Efficient Resource Utilization**: Virtual memory and resource management techniques help the OS use memory and processing power more effectively. Think of it as optimizing your circus acts to ensure the show goes on without a hitch.

## Ready to Join the Circus?

Strap in and get ready to explore the world of operating systems. Remember, the OS is your backstage pass to understanding how your computer really works. If you’re curious about what happens behind the scenes or just want to see how the magic happens, you’re in the right place!

🎩 **Ready to be amazed?** Dive into the chapters, and let’s make some OS magic happen! 🎩

---

**Disclaimer**: No actual magic wands or circus animals were harmed in the making of this course. However, a lot of brainpower and coffee were involved. Enjoy the show! ☕✨

## What Is CPU Virtualization?

Welcome to the fascinating world of CPU virtualization! Ever wondered how your computer seems to run many programs at once, even though it only has one processor? Let’s uncover the magic behind this illusion!

### How Does It Work?

Imagine your computer's processor (CPU) is like a single performer in a circus. Normally, it can only focus on one act at a time. However, with CPU virtualization, it’s as if this performer has a magical ability to juggle multiple acts simultaneously. Here’s how it works:

1. **Time Slicing**: Your computer's operating system (OS) quickly switches the CPU’s attention between different programs. Each program gets a small amount of CPU time before the OS switches to the next one. It’s like a performer rapidly changing costumes for different acts.

2. **Context Switching**: The OS keeps track of what each program was doing when it last had the CPU. When it’s time to switch programs, the OS saves the current program’s state and loads the state of the next program. This rapid switching makes it seem like all programs are running at the same time.

3. **Resource Management**: The OS decides which program gets to use the CPU and for how long. This ensures that all programs get a fair share of the CPU time, just like making sure every act in the circus gets its moment in the spotlight.

### Why Is It Important?

- **Seamless Multitasking**: Thanks to CPU virtualization, you can run multiple applications at once—like browsing the web while listening to music—without needing a bunch of processors.
- **Efficiency**: It allows your computer to use its processing power more effectively, handling several tasks at once even with limited hardware.

### Key Takeaways

- **Illusion of Simultaneity**: CPU virtualization makes it look like your computer is running many programs at once, even if it only has one processor.
- **Smart Scheduling**: The OS cleverly manages CPU time to ensure all programs get their turn, keeping everything running smoothly.

So, next time you have several apps open and everything is running smoothly, remember that it’s all thanks to the magic of CPU virtualization!

### Let's see code 
#### C code
```C
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
```
This C program demonstrates a simple CPU-intensive task by repeatedly printing a string to the console. You can  compile and run it to see how it utilizes the CPU. Adjust the sleep duration to observe how it  affects the program's performance. This example is a basic illustration of how CPU virtualization works.
#### To compile C code
```bash
gcc -o cpu cpu.c -Wall
```
#### To run C code
```bash
./cpu "A"
```
- You can see A is  printed to the console repeatedly, and the program will continue running until you stop it.
##### Running multiple cpu code at same time
```bash
./cpu A & ./cpu B & ./cpu C & ./cpu D &
````
- You can see A, B, C, D are printed to the console repeatedly.
- You can see the four programs running at same time.
- The illusion that the system has
a very large number of virtual CPUs. Turning a single CPU (or a small
set of them) into a seemingly infinite number of CPUs and thus allowing
many programs to seemingly run at once is what we call **virtualizing the
CPU**
<div style="display: flex; justify-content: space-between; width: 100%;  margin: 20px;">
  <a href="1-Intro.md" style="padding: 10px 20px; font-size: 16px; color: #fff; background-color: #007bff; text-align: center; text-decoration: none; border-radius: 5px;">Back</a>
  <a href="3-MemoryVirtualize.md" style="padding: 10px 20px; font-size: 16px; color: #fff; background-color: #28a745; text-align: center; text-decoration: none; border-radius: 5px;">Next</a>
</div>
