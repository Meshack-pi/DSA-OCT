## Problem 1: Longest Balanced Subarray (Prefix Sum)

## Statement
You are given an array `arr` of `0`s and `1`s.  
Find the **length of the longest contiguous subarray** where the number of `0`s and `1`s is **equal**, **without using hashmaps**.

## Example
Input: arr = [0, 1, 0, 1, 1, 0, 0]
Output: 6
Explanation: The subarray [0, 1, 0, 1, 1, 0] has 3 zeros and 3 ones.


## Hint
- Convert all `0`s to `-1`.  
- Compute the prefix sum array.  
- The task now becomes finding **two indices i and j (i < j)** such that `prefix[j] - prefix[i] == 0`.  
- You can do this using **two nested loops** (O(n²)) — perfectly fine at this stage.

## Challenge
Try to make your code clean and readable.  
Use functions to handle:
- Converting 0 → -1  
- Building prefix sum  
- Checking subarray ranges

## Problem 2: Rotate Array by K (Array Manipulation)

**Statement:**
Given an integer array `arr` of length `n`, rotate it to the **right** by `k` steps.

**Example:**
```
Input: arr = [1, 2, 3, 4, 5, 6, 7], k = 3
Output: [5, 6, 7, 1, 2, 3, 4]
```
**Hint:**
- Try solving using the **array reversal technique** (reverse entire array, then parts).  
- Do **not** use extra space.

---