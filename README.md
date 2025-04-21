# Leetcode-366-Find-leaves-of-a-Binary-Tree

Find Leaves of Binary Tree
This repository provides a C++ implementation to solve the problem of collecting leaves of a binary tree in successive rounds. In each round, the leaves are "removed" and collected until the entire tree is processed.
---
🚩 Problem Statement
Given the root of a binary tree, repeatedly remove all its leaves and return a list of lists representing the nodes collected at each round.
---
💡 Approach
Perform a post-order traversal of the tree.

The height of a node is defined as the number of edges on the longest downward path between the node and a leaf.

Group nodes by their height — the same as the round in which they would be removed if the tree were pruned iteratively.

Use a map to keep nodes grouped by height (auto-sorted).
---
✨ Key Concepts
Post-order traversal to compute height from leaves up to the root.

Map of vectors to group node values by their height.

Leaves = height 1, their parents = height 2, etc.
---
🧠 Example
cpp
Input:
         1
        / \
       2   3
      / \
     4   5

Output:
[[4,5,3],[2],[1]]

Explanation:
- Round 1: [4,5,3] (leaves)
- Round 2: [2]
- Round 3: [1]
⏱️ Time & Space Complexity
Time Complexity: O(N), where N is the number of nodes.

Space Complexity: O(N), due to recursion and the map.

🛠️ How to Run
Clone the repository.

Compile with a C++ compiler.

Use the findLeaves() function with a tree root.

🧩 Applications
Tree pruning simulations

Visualizing levels in bottom-up fashion

Tree compression technique
