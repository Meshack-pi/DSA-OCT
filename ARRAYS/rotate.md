# Problem: Rotate an Array by K Steps

## Statement
Write a C++ program that **rotates an integer array to the right by k positions**.

Rotating right by one position means that the last element moves to the first position, and all other elements shift right by one.

## Example Input 1
n = 7  
arr = [1, 2, 3, 4, 5, 6, 7]  
k = 3  

## Expected Output 1
Rotated array = [5, 6, 7, 1, 2, 3, 4]

## Example Input 2
n = 5  
arr = [10, 20, 30, 40, 50]  
k = 1  

## Expected Output 2
Rotated array = [50, 10, 20, 30, 40]

---

## Hint
Use modular arithmetic to handle rotations larger than the array size:
$k = k \bmod n$

Try to perform the rotation **in place**, using either:
1. **Reversal method** (reverse parts of the array step-by-step), or  
2. **Extra temporary array** to store rearranged values.

