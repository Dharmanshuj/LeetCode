# Explaintion

The nodesBetweenCriticalPoints function takes a ListNode* as input, which is the head of the singly-linked list.

- The function first checks if the input list is empty or has only one node. If so, it returns {-1, -1}, indicating that there are no critical points.
- The function initializes an empty vector result to store the indices of the critical points.
- The function then iterates through the list using a while loop, starting from the second node (since the first node can't be a critical point).
- Inside the loop, the function checks if the current node is a critical point by comparing its value with its previous and next nodes. If it's a local minimum or maximum, it adds the current index i to the result vector.
- After iterating through the entire list, the function checks if there are at least two critical points. If not, it returns {-1, -1}.
- The function then calculates the maximum distance between critical points by subtracting the first critical point's index from the last critical point's index.
- The function also calculates the minimum distance between critical points by iterating through the result vector and finding the smallest difference between consecutive critical points.
- Finally, the function returns a vector containing the minimum and maximum distances between critical points.

### Time complexity:

- The time complexity of this solution is O(n), where n is the number of nodes in the input list. This is because the function iterates through the list once to find the critical points and then iterates through the result vector to calculate the minimum and maximum distances.

### Space complexity:

- The space complexity of this solution is O(n), where n is the number of critical points in the input list. This is because the result vector stores the indices of the critical points, which can grow up to the size of the input list in the worst case.
