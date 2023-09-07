#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the number of different mixes for a single test case
long long countMixes(int N, vector<int>& A) {
    long long totalMixes = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            totalMixes += (long long)A[i] * A[j]; // All possible combinations of Ai and Aj
        }
    }

    return totalMixes;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Number of types of juice
        cin >> N;
        vector<int> A(N); // Quantity of each juice

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Calculate and print the number of different mixes
        long long result = countMixes(N, A);
        cout << result << endl;
    }

    return 0;
}
