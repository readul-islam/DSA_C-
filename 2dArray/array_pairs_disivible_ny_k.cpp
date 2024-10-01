#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr {-1, 1, -2, 2, -3, 3, -4, 4};  // Input array
    int k = 3;  // The divisor
    int start = 0;
    int end = arr.size() - 1;

    bool allPairsDivisible = true;  // To check if all pairs satisfy the condition

    // Loop to go through pairs
    while (start < end) {
        int sum = arr[start] + arr[end];  // Calculate sum of current pair
        cout << "Sum of " << arr[start] << " and " << arr[end] << " = " << sum << endl;

        // Check if the sum is divisible by k
        if (sum % k != 0) {
            cout << "Pair (" << arr[start] << ", " << arr[end] << ") is not divisible by " << k << endl;
            allPairsDivisible = false;
        }

        // Move towards the middle
        start++;
        end--;
    }

    // Final result
    if (allPairsDivisible) {
        cout << "All pairs are divisible by " << k << endl;
    } else {
        cout << "Not all pairs are divisible by " << k << endl;
    }

    return 0;
}
