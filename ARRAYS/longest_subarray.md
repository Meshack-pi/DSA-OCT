# Problem: Longest Subarray with Sum ≤ S

## Statement

Given an array of positive integers `arr` of size `n` and an integer `S`, find the **length of the longest contiguous subarray** whose sum is **less than or equal to S**.

You must solve this using the **variable-size sliding window technique**.

---

## Input

- An integer `n` — size of the array  
- An array of integers `arr[0..n-1]`  
- An integer `S` — the maximum allowed sum for the subarray

---

## Output

- An integer — the length of the longest contiguous subarray with sum ≤ `S`  
- If no such subarray exists, output `0`

---

## Example 1

**Input:**  
```
arr = [1, 2, 3, 4, 5]

S = 8
```

**Output:**  
```
3
```

**Explanation:**  
The subarray `[1, 2, 3]` has sum = 6 ≤ 8, and `[2, 3, 4]` has sum = 9 > 8.  
So the longest valid subarray length is 3.

---

## Example 2

**Input:**  
```
arr = [4, 1, 1, 1, 2, 3]
S = 5
```

**Output:**  
```
4
```

**Explanation:**  
The subarray `[1, 1, 1, 2]` has sum = 5 ≤ 5, which is the longest possible.

---

## Notes

- The array contains **only positive integers**.
- Try to solve this **without using nested loops**, i.e., in **O(n)** time using a sliding window approach.
- Think about **expanding the window** with `end` and **shrinking it** with `start` depending on whether the sum exceeds `S`.
---
