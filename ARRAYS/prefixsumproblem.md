# 🧩 Problem: Range Sum Queries (Multiple Queries)

## 📘 Statement
You are given an integer array `arr` of size `n`.  
You will receive `q` queries, each consisting of two integers `L` and `R` (0-based indices).  
For each query, find and print the **sum of elements** between indices `L` and `R` (inclusive).

Your solution must answer each query in **O(1)** time after **O(n)** preprocessing.

---

## 🧠 Input Format
1. An integer `n` — the size of the array  
2. `n` space-separated integers — the array elements  
3. An integer `q` — the number of queries  
4. `q` pairs of integers — each pair represents `L` and `R`

---

## 📤 Output Format
For each query, print the **range sum** on a new line.

---

## 🧩 Example

### Input:
n = 5
arr = [2, 4, 6, 8, 10]
q = 3
Queries:
0 2
1 3
2 4

shell
Copy code

### Output:
12
18
24