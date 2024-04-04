#include <iostream>

using namespace std;

// Recursive function to compute binomial coefficient
int binomialCoefficient(int n, int k) {
    // Base cases: if k equals 0 or n, return 1
    if (k == 0 || k == n) {
        return 1;
    }
    // Recursive case: compute binomial coefficient using the formula
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n, k;
    cin >> n >> k;

    // Check if k is greater than n
    if (k > n) {
        cout << "Error: k cannot be greater than n!" << endl;
    } else {
        
        cout<< binomialCoefficient(n, k) << endl;
    }

    return 0;
}
