# 📊 LeetCode Problem: PathSum III

## 🧩 Problem Statement

Given the root of a binary tree and an integer targetSum, return the **number of paths** where the sum of the values along the **path equals targetSum.**

> **Note**:
> - The path does not need to **start or end at the root** or a leaf, but it must **go downwards** (i.e., traveling only from **parent nodes to child nodes**).


## 🧠 Approach

We perform a **post-order traversal**  and **pre-order traversal** of the tree, and for each node, we:
- Recursively add each element (in **pre-order traversal**) to vector.
- Then **add each element** from vector start from end.
- **if(sum==targetSum) count++**
- Remove element in **post-order traversal** - **test.pop_back()**


## ✅ Example Walkthrough

### Example 1

<img src = "https://assets.leetcode.com/uploads/2021/04/09/pathsum3-1-tree.jpg">

##### Input: root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
##### Output: 3






## 🛠️ Constraints

- The number of nodes in the tree is in the  `range [0, 1000].`  
- Node values: `-109 <= Node.val <= 109`
- `-1000 <= targetSum <= 1000`
