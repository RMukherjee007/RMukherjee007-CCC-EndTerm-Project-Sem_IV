# Algorithmic Solutions to Real-World Problems Implementation

A complete C++ implementation demonstrating the practical application of fundamental algorithm paradigms—specifically the **Greedy Algorithm** and **Dynamic Programming (DP)**—with an interactive Terminal User Interface (TUI).

## Overview

Algorithms are the backbone of efficient problem-solving. This project maps abstract computer science concepts to tangible real-world scenarios:
1.  **Fractional Knapsack (Greedy):** Loading bulk cargo (divisible items).
2.  **0/1 Knapsack (Dynamic Programming):** Optimizing a fixed budget for high-value gadgets (indivisible items).

**Key Benefits:**
*   Demonstrates how to choose the right algorithmic approach based on data divisibility.
*   Optimal resource allocation for divisible goods using an `O(N log N)` greedy approach.
*   Guaranteed global optimums for non-divisible assets using an `O(N * W)` DP approach.
*   Memory-efficient data structures and interactive testing.

---

## File Descriptions

### `main.cpp` - Application Interface & Algorithm Logic

Contains both the algorithmic engines and the user interface.
**Structures:**
*   `Item`: Represents a real-world object with a `name`, `value`, and `weight`.

**Functions:**
*   `compareItems(Item a, Item b)`: Comparator for sorting items by value-to-weight ratio.
*   `runGreedyScenario()`: Manages the Fractional Knapsack logic for bulk cargo loading.
*   `runDPScenario()`: Manages the 0/1 Knapsack tabulation logic for budget optimization.
*   `main()`: Handles the interactive TUI, user input loops, and scenario routing.

---

## Installation & Setup

### Requirements
*   C++ Compiler (GCC/g++ or Clang)
*   Standard C++ Library (No external dependencies required)
*   Windows, macOS, or Linux environment

### Installation Steps
```bash
# 1. Navigate to the project directory
cd algo_project

# 2. Verify C++ compiler installation
g++ --version

# 3. Compile the source code
g++ main.cpp -o algo_demo

# 4. Ready to run!
