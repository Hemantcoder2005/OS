# The Abstraction: The Process 🚀

## What is a Process? 🤔
Think of a process as a running program—like a movie playing on your screen. 🎬

## THE CRUX OF THE PROBLEM: How to Create the Illusion of Many CPUs? 🎭
- **How do you trick your computer into thinking it has more CPUs than it actually does?** 🕵️‍♂️
- **With only a few physical CPUs, how can the OS make it seem like there’s a never-ending supply of them?** 🎩✨

## Understanding How It Works 🧠
- The OS is like a magician, making it look like you have loads of CPUs by virtualizing them. 🧙‍♂️✨
- It does this by switching between processes, giving each one a slice of CPU time—like sharing a pizza with friends. 🍕
- This clever trick is called **Time Sharing**. ⏲️
- **Time Quanta**: These are the tiny slices of time the OS gives each process. Think of them as the crumbs of the pizza. 🍕😄

## The Magic Ingredients 🪄
- To pull off this illusion, the OS uses:
  - **Low-level Machinery** 🛠️
  - **High-level Intelligence** 🧠

- On top of this, the OS has some **policies**—kind of like the rules of a game. 🎲

## Policies and Scheduling 🕹️
- **Policies**: Decide which process gets the CPU next and for how long.
- **Scheduling Policies**: The OS's game plan for deciding who gets the CPU and when.

Here are some common scheduling policies:

- **First-Come-First-Served (FCFS)**: Like waiting in line for your favorite chaat stall. 🌯
- **Shortest Job First (SJF)**: The process with the shortest task gets served first—like quick snacks before a big feast. 🍟
- **Round Robin (RR)**: Every process gets a turn, just like everyone gets a chance to speak in a group discussion. 🗣️
- **Priority Scheduling**: High-priority processes get the best seats, like VIP treatment at a wedding. 🎩
- **Multilevel Feedback Queue (MLFQ)**: A more complex system with multiple levels—think of it as different queues for different types of snacks at a party. 🥳

And that’s how your OS keeps everything running smoothly, making it seem like there’s a CPU party happening just for you! 🎉

[Back](../1/5-Persistence.md) | [Next](1-ProcessAPI.md)
