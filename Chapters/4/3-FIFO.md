# 📦 First In, First Out (FIFO) Scheduling

FIFO, or First In, First Out (sometimes called First Come, First Served), is one of the simplest scheduling algorithms. Think of it like the line at a coffee shop: the first person in line is the first to be served! ☕️

## 📝 How FIFO Works

FIFO has some clear benefits: it's simple and easy to implement. Given our assumptions, it works quite well. Let’s walk through a basic example:

### **Example: Jobs A, B, and C**

- **Assumptions:** 
  - Jobs A, B, and C arrive at the same time (Tarrival = 0)
  - Each job runs for 10 seconds

#### Timeline for FIFO Scheduling:

![FIFO Simple Example](path/to/fifo-simple-example.png)

From the timeline, you can see:
- Job A finishes at 10 seconds
- Job B finishes at 20 seconds
- Job C finishes at 30 seconds

**Average Turnaround Time:**
$T_{\text{average}} = \frac{10 + 20 + 30}{3} = 20 \text{ seconds}$

## 🚨 What Happens When Assumptions Change?

Let’s relax the assumption that all jobs have the same run time. What if jobs have different durations? 

### **Example: Jobs A, B, and C with Different Durations**

- **Job A:** 100 seconds
- **Jobs B and C:** 10 seconds each

#### Timeline for FIFO Scheduling with Different Job Lengths:

![FIFO With Different Job Lengths](path/to/fifo-different-lengths.png)

In this case:
- Job A runs for 100 seconds before Jobs B and C even start
- The average turnaround time becomes a painful 110 seconds:
$T_{\text{average}} = \frac{100 + 110 + 120}{3} = 110 \text{ seconds}$

This scenario highlights the **convoy effect**—where a long job delays the completion of all subsequent jobs, leading to high turnaround times.

## 🧠 Key Takeaways

- **FIFO** is straightforward and easy to implement.
- **Drawback:** Can cause long wait times if a long job is first, affecting overall system performance.

---

*Stay tuned as we explore more scheduling algorithms and see how they address the limitations of FIFO!* 🌟🚀
