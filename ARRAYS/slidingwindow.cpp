#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> &arr, int k) {
    int n = arr.size();
    int window_sum = 0, max_sum = 0;
    // Compute sum of first window
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;
    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; // Add next element, remove first in window
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main() {
    //the sliding window technique
    //fixed
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " is " << maxSumSubarray(arr, k);
    return 0;

    return 0;
}