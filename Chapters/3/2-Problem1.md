# 🚀 Limited Direct Execution (LDE) Explained

## 🎯 Problem #1: Restricted Operations

**Direct execution** is fast because it runs the program directly on the CPU. But there's a problem! What if the process tries to perform restricted operations, like accessing more memory or interacting with the disk? We don't want the program to have total control over the system, right? 🛑

### ⚠️ The Crux: How to Perform Restricted Operations?

The process needs to do things like input/output (I/O), but it can’t have complete freedom. The OS and hardware need to work together to manage this without giving away the keys to the kingdom. So how do they do that? 🤔

---

## 🛡️ User Mode vs. Kernel Mode

### User Mode 🧍:
- A process running in **user mode** is like a regular citizen. It can do a lot of things, but it's **restricted** from performing certain operations (like I/O). If it tries to do something it's not allowed to, the system raises an **exception**. 🚨

### Kernel Mode 🧑‍💻:
- The **kernel** (operating system) is in charge. It runs in **kernel mode**, where it can do anything, like I/O requests, memory access, and more. 

---

## 🔄 The System Call: Asking for Help from the Kernel

When a process needs to perform a privileged operation (e.g., reading from disk), it makes a **system call** to ask the kernel for help. Here’s how it works:

1. The process calls a function like `open()` or `read()`. 📞
2. This function is actually a **procedure call** into the C library, which prepares the system call number and arguments.
3. A special **trap instruction** is executed, which **switches to kernel mode**. The kernel now has the privileges to handle the operation. 🔄
4. Once the operation is done, the OS uses a **return-from-trap** instruction to go back to **user mode**. Everything returns to normal, and the process can continue. 🛠️

---

## 🗺️ Trap Table: The OS’s Secret Playbook

The OS sets up a **trap table** at boot time. This is like a map that tells the hardware what to do when different events (like system calls or interrupts) happen. The OS fills this table with instructions, and the hardware uses it to jump to the right place when something important happens. 🗺️

1. The **kernel** sets up the trap table during boot.
2. The **CPU** remembers the table and refers to it whenever an event (like a system call) occurs.
3. The kernel can safely handle the event and return control back to the user process.

---

## 🕵️ Be Wary of User Inputs!

The OS must be **super careful** with the arguments it gets from user programs. Imagine if a program passes an invalid memory address—this could lead to big security risks, like accessing kernel memory or other processes' data! The OS checks inputs carefully to make sure nothing shady is going on. 🔒

---

## ⏳ Timeline of Events: The Limited Direct Execution Protocol

1. **Boot Time**: The OS sets up the **trap table** and prepares for system calls and interrupts.
2. **Process Execution**: The OS allocates memory, sets up the process, and starts running it in **user mode**.
3. **System Call**: When the process needs something privileged (like I/O), it **traps into the OS**, which handles the system call in **kernel mode**.
4. **Return to User Mode**: After the system call is done, the process goes back to **user mode** and continues its work.

---

## 🔑 Key Takeaways:

- **Direct execution** is fast, but **restricted** operations (like I/O) need special handling.
- The **trap table** and **system calls** are how the OS safely manages privileged operations.
- The CPU switches between **user mode** and **kernel mode** to keep things secure. 🔄

---

[back](1-LDE.md) | [Next](3-Problem2.md)