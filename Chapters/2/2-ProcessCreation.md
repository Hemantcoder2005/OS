# Process Creation 🎬

Creating a process is like setting up for a new show. Here’s how it all works:

- **Loading the Program** 📥:
  - The OS first needs to bring your program from the disk into memory. Think of it as moving a script from the bookshelf to the stage. 📚🏟️

- **Lazy Loading** 🛌:
  - Modern operating systems are a bit lazy—they only load parts of the program as they’re needed. Imagine you only start studying for a test right before it’s due. 📅📚

- **Stack Allocation** 📚:
  - The OS sets up a memory area called the stack. This is where the program keeps its temporary stuff, like local variables and function details. It’s like organizing your desk with everything you need for a project. 🗂️🖋️

- **Heap Allocation** 🏗️:
  - For more flexible memory needs, the OS provides a heap. This is where the program can request and free up space as needed—like adding new shelves to store your growing book collection. 📚📦

- **I/O Setup** 🎙️:
  - The OS also handles basic input and output tasks. It sets up channels for reading input (like a microphone for questions) and printing output (like a speaker for answers). 📞📺

- **Starting the Program** 🚀:
  - Finally, the OS gets the program running by jumping to the `main()` function. It’s like opening the curtains and starting the performance. 🎭✨

So, by loading the program, setting up memory, handling I/O, and starting execution, the OS gets everything ready for your program to run smoothly. 🌟

[Back](1-ProcessAPI.md) | [Next](3-ProcessStates.md)
