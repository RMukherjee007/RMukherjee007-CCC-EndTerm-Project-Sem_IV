# 🚀 Algorithmic Solutions to Real-World Problems

A complete C++ implementation demonstrating the practical application of fundamental algorithm paradigms—specifically **Greedy Algorithms** and **Dynamic Programming**—through an interactive terminal-based application. :contentReference[oaicite:0]{index=0}

---

# 📌 Overview

Algorithms are the backbone of efficient problem-solving. This project maps core computer science concepts to practical real-world scenarios:

### 1. Greedy Algorithm — Fractional Knapsack
Simulates bulk cargo loading where items can be divided.

### 2. Dynamic Programming — 0/1 Knapsack
Simulates budget optimization where items cannot be divided.

---

# ✨ Features

✅ Interactive terminal UI  
✅ Real-world scenario simulation  
✅ Efficient resource allocation  
✅ Optimal decision-making models  
✅ Well-structured C++ implementation  

---

# 🧠 Algorithms Implemented

## 1️⃣ Fractional Knapsack (Greedy)

### Real-Life Example
Loading minerals into an aircraft where goods can be divided.

### Approach
- Calculate value/weight ratio
- Sort items in descending order
- Pick highest ratio items first
- Take fractions if needed

### Complexity
```cpp
Time Complexity: O(N log N)
Space Complexity: O(1)
```

---

## 2️⃣ 0/1 Knapsack (Dynamic Programming)

### Real-Life Example
Buying gadgets within a fixed budget.

### Approach
- Create DP table
- Solve smaller subproblems
- Build optimal solution bottom-up

### Complexity
```cpp
Time Complexity: O(N × W)
Space Complexity: O(N × W)
```

---

# 📂 Project Structure

```bash
algo_project/
│
├── main.cpp               # Source code
├── README.md              # Documentation
├── Project_Report.pdf     # Detailed report
└── algo_demo              # Compiled executable
```

---

# ⚙️ Installation

## Requirements
- C++ Compiler (GCC / Clang)
- C++11 or higher

---

## Setup

```bash
# Clone repository
git clone <your-repo-url>

# Enter directory
cd algo_project

# Compile
g++ main.cpp -o algo_demo

# Run
./algo_demo
```

For Windows:

```bash
algo_demo.exe
```

---

# 🎮 Usage

After running:

```bash
1 → Greedy Algorithm
2 → Dynamic Programming
3 → Exit
```

---

## Option 1 — Resource Allocation

Input cargo capacity.

Example output:

```bash
Processing minerals greedily...

Loaded 100% of Gold Dust ($600)
Loaded 50% of Silver Ore ($200)

>>> Total Maximized Value: $800 <<<
```

---

## Option 2 — Budget Optimization

Input available budget.

Example output:

```bash
Optimization Complete using Tabulation.

>>> Max Utility Value: 350 <<<
```

---

# 🔍 Core Functions

## Structures

### Item
Represents:
- Name
- Value
- Weight

---

## Functions

### `compareItems()`
Sorts items by value-to-weight ratio.

### `runGreedyScenario()`
Executes Fractional Knapsack.

### `runDPScenario()`
Executes 0/1 Knapsack.

### `main()`
Handles UI and routing.

---

# 📊 Algorithm Comparison

| Feature | Greedy | Dynamic Programming |
|---------|--------|---------------------|
| Speed | Fast | Moderate |
| Memory | Low | Higher |
| Guarantees Optimum | Sometimes | Always |
| Divisible Items | Yes | No |
| Real-World Example | Cargo Loading | Budget Planning |

---

# ⚠️ Limitations

### Dynamic Programming
Very large budgets may cause high memory usage.

Recommended:

```bash
Budget < 10000
```

### Input Validation
Only integer inputs are supported.

---

# 🎓 Learning Outcomes

This project demonstrates:

- Greedy-choice property
- Optimal substructure
- Overlapping subproblems
- Real-world algorithm selection
- Time and space complexity analysis

---

# 🛠 Technologies Used

- C++
- STL
- Terminal UI

---

# 📚 Applications

These algorithms are used in:

- Logistics optimization
- Investment planning
- Resource allocation
- Supply chain systems
- Budget management

---

# 👨‍💻 Author

**Raghav Mukherjee**

Computer Science Engineering

---

# 📄 License

This project is for educational purposes. Feel free to use, modify, and enhance.

---

⭐ If you found this project useful, consider starring the repository!
