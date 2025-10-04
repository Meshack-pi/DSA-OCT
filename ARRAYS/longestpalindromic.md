## 🧩 Problem: Longest Palindromic Subarray

### Problem Statement
You are given an array of integers `arr` of size \(n\).  
Your task is to find the **length of the longest contiguous subarray** that forms a **palindrome**.

A **palindromic subarray** is one that reads the same forward and backward.

You must output both:
1. The **length** of the longest palindromic subarray.  
2. The **elements** of that subarray.

If multiple subarrays have the same maximum palindromic length, print the **first one** that appears.

---

### Input Format
- The first line contains an integer $n$ — the number of elements in the array.  
- The second line contains $n$ integers separated by spaces — the elements of the array.

---

### Output Format
Print:
- The length of the longest palindromic subarray on the first line.  
- The elements of the subarray on the second line.

---

### Examples

**Example 1**

**Input:**
7
1 2 3 2 1 5 6

**Output:**
5
1 2 3 2 1

**Explanation:**  
The subarray `[1, 2, 3, 2, 1]` is palindromic and has length $5$, which is the maximum possible.

---

**Example 2**

**Input:**
8
4 5 6 5 4 3 3 2

**Output:**
5
4 5 6 5 4

**Explanation:**  
The subarray `[4, 5, 6, 5, 4]` is the longest palindrome.  
Length $= 5$.

---

**Example 3**

**Input:**
5
1 2 3 4 5
**Output:**
1
1

**Explanation:**  
No palindromic subarray longer than one element exists, so the result is the first element.

---

### Constraints
- \(1 \leq n \leq 10^3\)  
- $-10^5 \leq arr[i] \leq 10^5$

---

### Hint
Try using **two-pointer expansion** around each center index to check for both **odd** and **even** length palindromes.  
For every center, expand outward while $arr[left] = arr[right]$.
