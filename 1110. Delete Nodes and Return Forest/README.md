# Explaination

The solution uses a recursive depth-first search (DFS) approach to traverse the binary tree and delete the nodes specified in the to_delete list.

### Helper function: dfs

The dfs function takes three arguments:

  - **root:** the current node in the binary tree
  - **to_delete_set:** an unordered set of node values to delete
  - **result:** a vector to store the roots of the resulting forest

The function does the following:

  1. If root is null, return null.
  2. Recursively call dfs on the left and right child nodes of root.
  3. If root's value is in the to_delete_set, delete the node and add its non-null child nodes to the result vector.
  4. If root's value is not in the to_delete_set, return the node as is.

### Main function: delNodes

The delNodes function takes two arguments:

  - root: the root of the binary tree
  - to_delete: a vector of node values to delete

The function does the following:

  1. Create an unordered set to_delete_set from the to_delete vector.
  2. Initialize an empty vector result to store the roots of the resulting forest.
  3. If root is not null and its value is not in the to_delete_set, add it to the result vector.
  4. Call the dfs function on root and store the result in root.
  5. Return the result vector.

### Key insights:

  - The dfs function uses a recursive approach to traverse the binary tree and delete nodes.
  - The to_delete_set is used to efficiently check if a node's value is in the list of nodes to delete.
  - The result vector stores the roots of the resulting forest, which are the nodes that were not deleted.
  - The main function initializes the result vector and calls the dfs function to perform the deletion and forest construction.
