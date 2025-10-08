# Problem: Maximum Average Subarray of Size K

You are given an integer array `arr` of length `n`, and an integer `k`.

Your task is to find the **maximum average** of any contiguous subarray of size `k`.

---

## Input:
- The first line contains an integer `n` — the number of elements in the array.
- The second line contains `n` space-separated integers — the elements of the array.
- The third line contains an integer `k` — the size of the subarray.

---

## Output:
Print a single value — the **maximum average** (as a floating-point number rounded to 2 decimal places).

---

## Example 1:
**Input**
```
6
2 1 5 1 3 2
3
```

**Output**


`3.00`


**Explanation:**
The subarray `[5, 1, 3]` has the maximum sum `9`.  
Average = `9 / 3 = 3.00`.


## Example 2:
**Input**

```
5
1 12 -5 -6 50
4
```

**Output**


`12.75`


**Explanation:**
The subarray `[12, -5, -6, 50]` has sum = `51`, 
so average = `51 / 4 = 12.75`.