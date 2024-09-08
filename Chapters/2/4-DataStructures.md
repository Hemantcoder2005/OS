# Process Data Structures 🎢

Just like any other program, the OS needs to keep track of a bunch of stuff about each process. Here’s how it does it:

- **Process List** 📋:
  - The OS maintains a list of all processes, kind of like a to-do list for everything that's currently running. It helps keep track of who’s doing what. 🏃‍♂️📝

- **Process Structure** 🏗️:
  - Each process has a special data structure that holds key info. It’s like having a detailed file for every student in a class. 📂🧑‍🎓

- **Key Info Tracked** 🔍:
  - **Memory**: Where the process lives in memory—like its home address. 🏠
  - **Stack**: For keeping track of what the process is doing right now—its daily planner. 📅
  - **State**: The current mood of the process—Running, Sleeping, Zombie, or any other state. 🏃‍♂️😴🧟‍♂️
  - **Registers**: The process’s personal notes (register values) are saved so it can be resumed later—like saving your game progress. 🎮💾
  - **PID**: The process ID, its unique name tag—like a student ID badge. 🆔

- **Process States** 🎭:
  - **Running**: The process is on stage, performing. 🎤
  - **Sleeping**: The process is taking a nap, waiting for something to happen. 😴
  - **Zombie**: The process has finished but is still hanging around, waiting for a clean-up. 👻
  - **Stopped**: The process is paused, like a TV show on hold. ⏸️
  - **Dead**: The process has exited, off to its eternal rest. 💀

- **Zombie State** 🧟‍♂️:
  - After a process finishes, it might become a zombie until the parent process says, "I’m done with you," so the OS can clean up properly. 🧹👋

So, the OS is basically juggling a bunch of process files, keeping them organized, and making sure everything runs smoothly! 🎪🎉

[Back](3-ProcessStates.md) | [Next](../3/readme.md)
