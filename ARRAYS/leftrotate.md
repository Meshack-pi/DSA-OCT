# 🌀 Problem: Dynamic Left Rotation of an Array

## Statement
You are given an integer array of size `n` and a number of rotation queries `q`.

For each query, you are given a value `k`, and you must **rotate the array to the left by `k` positions**.

After each rotation, print the **current state of the array**.

---

### Input Format
- The first line contains an integer `n`, the size of the array.  
- The second line contains `n` space-separated integers representing the array elements.  
- The third line contains an integer `q`, the number of rotation queries.  
- The next `q` lines each contain an integer `k_i`, the number of positions to rotate the array to the **left**.

---

### Output Format
For each query, print the array after rotating it to the left by `k_i` positions.

---

### Example Input
n = 5

arr = [1, 2, 3, 4, 5]

q = 3

k = [1, 2, 7]



### Expected Output
After rotating left by 1: 2 3 4 5 1
After rotating left by 2: 4 5 1 2 3
After rotating left by 7: 2 3 4 5 1

yaml
Copy code

---

### Explanation
- For `k = 1`: shift every element left by 1 → `[2, 3, 4, 5, 1]`  
- For `k = 2`: shift left by 2 → `[4, 5, 1, 2, 3]`  
- For `k = 7`: since `7 > n`, compute `k = 7 \bmod 5 = 2` and rotate by 2 again.

---

### Constraints
- `1 \leq n \leq 10^5`  
- `1 \leq q \leq 10^3`  
- `0 \leq k_i \leq 10^9`

---

### Hint 💡
Use the reversal technique or modular arithmetic:
``
k = k \bmod n
``  
and perform in-place rotation for efficiency.

Try to write a reusable function:
```cpp
void rotateLeft(vector<int>& arr, int k);
//You can even use auto in your loops for cleaner iteration.
```