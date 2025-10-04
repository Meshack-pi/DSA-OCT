/*
Problem: Longest Palindromic Subarray

Statement:
Write a C++ program that finds the longest contiguous subarray that forms a palindrome.

A subarray is palindromic if it reads the same forward and backward.

Example Input 1:
n = 7
arr = [2, 3, 3, 3, 2, 1, 1]

Expected Output 1:
Longest palindromic subarray = [2, 3, 3, 3, 2]
Length = 5

Example Input 2:
n = 6
arr = [1, 2, 2, 1, 3, 3]

Expected Output 2:
Longest palindromic subarray = [1, 2, 2, 1]
Length = 4
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find the longest palindromic subarray
void longestPalindrome(vector<int> &arr, int n) {
    int start = 0;      // starting index of the longest palindrome
    int maxLen = 1;     // length of the longest palindrome

    // Helper lambda to expand around a given center
    auto expand = [&](int left, int right) {
        while (left >= 0 && right < n && arr[left] == arr[right]) {
            left--;
            right++;
        }
        // when loop breaks, indices are one step beyond palindrome bounds
        int len = right - left - 1;
        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    };

    // Try every index as center
    for (int i = 0; i < n; i++) {
        // Odd-length palindrome (centered at i)
        expand(i, i);
        // Even-length palindrome (center between i and i+1)
        expand(i, i + 1);
    }

    // Print result
    cout << "Longest palindromic subarray = [";
    for (int i = start; i < start + maxLen; i++) {
        cout << arr[i];
        if (i != start + maxLen - 1)
            cout << ", ";
    }
    cout << "]" << endl;
    cout << "Length = " << maxLen << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    longestPalindrome(arr, n);
    return 0;
}
