Algorithmic Solutions to Real-World Problems ImplementationA complete C++ implementation demonstrating the practical application of fundamental algorithm paradigms—specifically the Greedy Algorithm and Dynamic Programming (DP)—with an interactive Terminal User Interface (TUI).OverviewAlgorithms are the backbone of efficient problem-solving. This project maps abstract computer science concepts to tangible real-world scenarios:Fractional Knapsack (Greedy): Loading bulk cargo (divisible items).0/1 Knapsack (Dynamic Programming): Optimizing a fixed budget for high-value gadgets (indivisible items).Key Benefits:Demonstrates how to choose the right algorithmic approach based on data divisibility.Optimal resource allocation for divisible goods using an $O(N \log N)$ greedy approach.Guaranteed global optimums for non-divisible assets using an $O(N \times W)$ DP approach.Memory-efficient data structures and interactive testing.Project StructurePlaintextalgo_project/
├── main.cpp                # Core application with TUI and algorithm logic
├── README.md               # This file
├── Project_Report.pdf      # Detailed theoretical explanation and analysis
└── (generated files)
    └── algo_demo           # Compiled executable
File Descriptionsmain.cpp - Application Interface & Algorithm LogicContains both the algorithmic engines and the user interface.Structures:Item: Represents a real-world object with a name, value, and weight.Functions:compareItems(Item a, Item b): Comparator for sorting items by value-to-weight ratio.runGreedyScenario(): Manages the Fractional Knapsack logic for bulk cargo loading.runDPScenario(): Manages the 0/1 Knapsack tabulation logic for budget optimization.main(): Handles the interactive TUI, user input loops, and scenario routing.Installation & SetupRequirementsC++ Compiler (GCC/g++ or Clang)Standard C++ Library (No external dependencies required)Windows, macOS, or Linux environmentInstallation StepsBash# 1. Navigate to the project directory
cd algo_project

# 2. Verify C++ compiler installation
g++ --version

# 3. Compile the source code
g++ main.cpp -o algo_demo

# 4. Ready to run!
UsageRunning the ApplicationBash# Linux / macOS
./algo_demo

# Windows
algo_demo.exe
Option 1: Resource Allocation (Greedy)Select option 1 to simulate a cargo loader. You will be prompted to enter a weight capacity for a plane. The algorithm will greedily load high-value minerals (like Gold Dust) before moving to lower-value ones, slicing the final item to fit perfectly.Option 2: Budget Optimization (DP)Select option 2 to simulate a gadget-buying spree. You will enter a fixed budget. The algorithm will evaluate all possible combinations of indivisible items (Laptops, Phones) to find the absolute maximum utility value you can achieve without exceeding your budget.Output ExplainedScenario 1 Output (Greedy)Shows exactly how much of each item was loaded into the plane to maximize profit:PlaintextProcessing minerals greedily (highest value/weight ratio first)...
 - Loaded 100% of Gold Dust ($600)
 - Loaded 50.0% of Silver Ore ($200)
>>> Total Maximize Value in Cargo: $800 <<<
Scenario 2 Output (Dynamic Programming)Shows the absolute maximum value achievable with a strict "all-or-nothing" budget constraint:PlaintextOptimization Complete using Tabulation.
>>> Max Utility Value for Given Budget: 350 <<<
Features ExplainedModular DesignThe logic for Greedy and DP are separated into distinct, highly readable functions, making it easy to extract them for other software projects.Interactive TUIInstead of hardcoded variables, the application prompts the user for real-time constraints (capacity/budget) to demonstrate how the algorithms adapt on the fly.Data Divisibility AwarenessThe code explicitly handles fractional mathematics (double) for the Greedy approach and strict integer bounding for the DP approach.Algorithm ExplanationHow Fractional Knapsack Works (Greedy)Frequency Analysis: Calculate the value-to-weight ratio for every available item.Sort: Order the items from highest ratio to lowest.Fill: Take 100% of the items starting from the top of the list.Fractional Split: If an item cannot fit entirely, take exactly the fraction needed to hit maximum capacity, then stop.How 0/1 Knapsack Works (Dynamic Programming)Initialize Tabulation: Create a 2D matrix (table) where rows represent items and columns represent incremental budget sizes.Bottom-Up Evaluation: For each cell, check if the current item fits within the current column's budget.The DP Choice: If it fits, record the maximum of two choices:Taking the item (Value of item + optimal value of remaining budget).Leaving the item (Optimal value from the row above).Result: The bottom-right cell of the matrix holds the guaranteed global optimum.ComplexitiesGreedy: Time O(N log N) (due to sorting), Space O(1).Dynamic Programming: Time O(N * W) (where W is budget size), Space O(N * W).Example WalkthroughPlaintext========================================
   REAL-WORLD ALGORITHM DEMONSTRATOR    
========================================
1. Resource Allocation (Greedy Algorithm)
2. Budget Optimization (Dynamic Programming)
3. Exit
Selection: 1

--- [SCENARIO 1: CARGO LOADING (GREEDY)] ---
Enter the cargo plane's weight capacity (e.g., 50): 25

Processing minerals greedily (highest value/weight ratio first)...
 - Loaded 100% of Gold Dust ($600)
 - Loaded 75.0% of Silver Ore ($300)

>>> Total Maximize Value in Cargo: $900 <<<
--------------------------------------------

========================================
   REAL-WORLD ALGORITHM DEMONSTRATOR    
========================================
1. Resource Allocation (Greedy Algorithm)
2. Budget Optimization (Dynamic Programming)
3. Exit
Selection: 3
Exiting program. Goodbye!
Error HandlingThe application handles common console interaction errors safely:ErrorCauseSolutionInfinite Menu LoopUser types letters (e.g., "A") instead of an integer menu choice.cin.clear() and cin.ignore() discard bad input and reprompt safely.Sub-optimal DP outputsPassing fractional items to DP.Handled structurally: DP explicitly uses int vectors for indivisible tracking.Advanced UsageCustomizing the InventoryYou can easily add your own real-world items by modifying the vectors inside the functions.Adding Cargo (Greedy):C++vector<Item> items = {
    {"Gold Dust", 600, 10}, 
    {"Silver Ore", 400, 20}, 
    {"Copper", 150, 30},
    {"Platinum", 1000, 5} // Add custom items here
};
Implementation DetailsThe Greedy Ratio ComparatorC++bool compareItems(Item a, Item b) {
    return (double)a.value / a.weight > (double)b.value / b.weight;
}
This single line forces the std::sort function to rank items purely by their efficiency (bang for your buck), which is the cornerstone of the greedy-choice property.TroubleshootingProblem: "g++ is not recognized as an internal or external command"Solution: You need to install MinGW (Windows) or Xcode Command Line Tools (macOS) and add it to your system's PATH.Problem: The DP table allocates too much memory and crashes.Solution: The 0/1 Knapsack DP approach is pseudo-polynomial. Extremely large budgets (e.g., 10,000,000) will cause a stack overflow or memory exhaustion. Keep budgets reasonable (e.g., under 10,000) or optimize the 2D vector to a 1D vector to save memory.LicenseThis implementation is provided for educational purposes. Feel free to modify and use it in your own projects or coursework.ReferencesCormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). Introduction to Algorithms (3rd ed.). MIT Press. (Foundational definitions of Greedy and DP paradigms).SupportFor issues or questions:Review the troubleshooting section.Reference the accompanying Project_Report.pdf for a deeper dive into the mathematical proofs of these algorithms.Ensure you are entering valid integer values during the TUI prompts.Version: 1.0 | Last Updated: 2026 | Compiler Requirement: GCC/C++11+
