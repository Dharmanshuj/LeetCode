# Explaination

The solution is implemented as a class with two member functions: find_leaf and countPairs.

**find_leaf function**

This function is a recursive helper function that traverses the binary tree and builds a mapping from each leaf node to its path from the root. The function takes four parameters:

  - root: the current node in the tree
  - m: an unordered map that stores the mapping from each leaf node to its path
  - leaf: a vector that stores the leaf nodes
  - s: the current path from the root to the current node

The function works as follows:

  1. If the current node is null, return immediately.
  2. If the current node is a leaf node (i.e., it has no left or right child), add it to the leaf vector and store its path in the m map.
  3. Recursively call find_leaf on the left and right children of the current node, appending '0' and '1' to the current path s, respectively.

**countPairs function**

This function takes a binary tree root and an integer distance as input, and returns the number of pairs of leaf nodes that have a distance of at most distance between them. The function works as follows:

  1. Call find_leaf to build the mapping from each leaf node to its path from the root.
  2. Initialize a counter count to 0.
  3. Iterate over each pair of leaf nodes in the leaf vector using two nested loops.
  4. For each pair of leaf nodes, calculate the distance between them by comparing their paths. The distance is calculated as the number of differing bits in the paths.
  5. If the distance is less than or equal to distance, increment the count variable.
  6. Return the final count value.

**Distance calculation**

The distance between two leaf nodes is calculated by comparing their paths. The paths are represented as strings of '0's and '1's, where '0' represents a left child and '1' represents a right child. The distance is calculated as follows:

  1. Find the common prefix of the two paths by iterating through the paths until they diverge.
  2. Count the number of bits in each path that are not part of the common prefix.
  3. The distance is the sum of these two counts.

For example, if the paths are "010" and "011", the common prefix is "01", and the distance is 1 (because the last bit differs).

Overall, this solution has a time complexity of O(n^2), where n is the number of leaf nodes, because it iterates over each pair of leaf nodes to calculate the distance. The space complexity is O(n), because it stores the mapping from each leaf node to its path in the m map.
