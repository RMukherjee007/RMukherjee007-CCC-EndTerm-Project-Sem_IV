#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

// Data structure for items
struct Item {
    string name;
    int value, weight;
};

// Comparator for Greedy sorting (Value/Weight ratio)
bool compareItems(Item a, Item b) {
    return (double)a.value / a.weight > (double)b.value / b.weight;
}

// 1. GREEDY: Fractional Knapsack (Resource Allocation)
void runGreedyScenario() {
    int capacity;
    cout << "\n--- [SCENARIO: CARGO LOADING] ---\n";
    cout << "Enter plane's weight capacity: ";
    cin >> capacity;

    vector<Item> items = {{"Gold Dust", 500, 10}, {"Silver Ore", 300, 20}, {"Copper", 100, 30}};
    sort(items.begin(), items.end(), compareItems);

    double totalValue = 0.0;
    cout << "\nProcessing minerals greedily...\n";
    for (auto& item : items) {
        if (capacity == 0) break;
        if (item.weight <= capacity) {
            capacity -= item.weight;
            totalValue += item.value;
            cout << " - Loaded 100% of " << item.name << endl;
        } else {
            double fraction = (double)capacity / item.weight;
            totalValue += item.value * fraction;
            cout << " - Loaded " << (fraction * 100) << "% of " << item.name << endl;
            capacity = 0;
        }
    }
    cout << "Total Value in Cargo: $" << totalValue << "\n--------------------------------\n";
}

// 2. DP: 0/1 Knapsack (Budget Optimization)
void runDPScenario() {
    int budget;
    cout << "\n--- [SCENARIO: BUDGET SPENDING] ---\n";
    cout << "Enter your total budget: ";
    cin >> budget;

    vector<int> val = {150, 200, 300}; // Laptop, Phone, Tablet
    vector<int> wt = {10, 20, 30};    // Cost/Weight
    int n = val.size();

    vector<vector<int>> dp(n + 1, vector<int>(budget + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= budget; w++) {
            if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    cout << "\nOptimization Complete.\n";
    cout << "Max Utility Value for Budget: " << dp[n][budget] << "\n--------------------------------\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\n========================================\n";
        cout << "   REAL-WORLD ALGORITHM DEMONSTRATOR    \n";
        cout << "========================================\n";
        cout << "1. Resource Allocation (Greedy)\n";
        cout << "2. Budget Optimization (Dynamic Programming)\n";
        cout << "3. Exit\n";
        cout << "Selection: ";
        cin >> choice;

        if (choice == 1) runGreedyScenario();
        else if (choice == 2) runDPScenario();
        else break;
    }
    return 0;
}
